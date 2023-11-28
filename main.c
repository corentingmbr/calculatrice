#include <stdio.h>
#include <math.h>

// fonction addition
double add(double a, double b) {
    return a + b;
}
// fonction soustraction
double subtract(double a, double b) {
    return a - b;
}
// fonction multiplication
double multiply(double a, double b) {
    return a * b;
}
// fonction division
double divide(double a, double b) {
    if(b != 0) {
        return a / b;
    } else {
            printf("Error: Division by zero.\n"); // protection anti-débile
        return 0;
    }
}
// fonction puissances
double power(double a, double b) {
    return pow(a, b);
}
// fonction racine carré
double square_root(double a) {
    if(a >= 0) {
        return sqrt(a);
    } else {
        printf("Error: Square root of a negative number.\n"); // Protection anti-gueux
        return 0;
    }
}
// fonction Pourcentage
double percentage(double a, double b) {
    return (a / b) * 100;
}

int main() {
    int choice;
    double num1, num2, result; // variables

    // Menu
    do {
            printf("Choose an operation: \n 1) Addition \n 2) Substraction \n 3) Multiplication \n 4) Division \n 5) Power\n 6) Square root \n 7) Percentage \n 8) Leave calculator :P\n");
        scanf("%d", &choice);

        // Choix de sortie
        if(choice == 8) {
            break;
        }
        // Scanf de la première réponse de l'utilisateur

        printf("Enter a number : ");
        scanf("%lf", &num1);

        // Ajout du deuxième nombre à entrer pour toutes les fonctions SAUF racine carré.
        if(choice != 6) {
            printf("Enter a second number: ");
            scanf("%lf", &num2);
        }
        // Pointer vers la fonction grâce à switch case en fonction du nombre entré

        switch(choice) {
            case 1:
                result = add(num1, num2);
                break;
            case 2:
                result = subtract(num1, num2);
                break;
            case 3:
                result = multiply(num1, num2);
                break;
            case 4:
                result = divide(num1, num2);
                break;
            case 5:
                result = power(num1, num2);
                break;
            case 6:
                result = square_root(num1);
                break;
            case 7:
                result = percentage(num1, num2);
                break;
            default:
                printf("Invalide Choice !\n"); // protection anti-jnoun
                continue;
        }

        printf("Result : %.2lf\n", result); // Affichage du résultat final

    } while(choice != 8);

    return 0;
}