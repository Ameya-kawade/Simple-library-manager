#include <stdio.h>
#include <string.h>

// structure

struct library
{
    int accession_number;
    char title[30];
    char author_name[20];
    float price;
    char is_issued;

} typedef library, books[5];
// structure ends here

// main function

int main()
{
    //Declaring variable
    library books[5];
    char user_string[30];
    int choice = 0;
    int is_book_issued;
    int book_found = 1;
    //Declaring variable ends here
    
    //For entering data of books
    
    printf("Entering the data for books: \n");

    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Enter the title of the book: \n");
        fgets(books[i].title, 30, stdin);
        fflush(stdin);
        printf("Enter the author's name of the book: \n");
        fgets(books[i].author_name, 30, stdin);
        fflush(stdin);
        printf("Enter if the book is issued: \n");
        scanf("%c", &books[i].is_issued);
        printf("Enter the accession number of the book: \n");
        scanf("%d", &books[i].accession_number);
        printf("Enter the price of the book: \n");
        scanf("%f", &books[i].price);
        printf("\n");
    }
    
    //Entering data for books ends here.
    
    printf("\n");
    
    // Library management system starts here
    do
    {
        printf("Welcome to the library!\n");
        printf("\n");
        printf("Which book are you looking for?\n");
        fflush(stdin);
        fgets(user_string, 30, stdin);
        int i = 0;
        int index;
        while (i < 5)
        {
            if (strcmp(user_string, books[i].title) == 0)
            {
                book_found = 0;
                index = i;
                break;
            }
            i++;
        }
            printf("\n");
        if (book_found == 0)
        {
            printf("Book found !!\n");
            printf("Title of the book : %s\n", books[index].title);
            printf("Author of the book : %s\n", books[index].author_name);
            printf("Price of the book : %f\n", books[index].price);
            printf("\n");
            printf("Accession number of the book : %d\n", books[index].accession_number);
            printf("\n");
            printf("Is the book issued : %c\n", books[index].is_issued);
            printf("\n");
            printf("\n");
            if (books[index].is_issued == 'y')
            {
                printf("Sorry come next time.\n");
            }
            else
            {
                printf("Do you want the book?\n");
                scanf("%c", &books[index].is_issued);
            }
        }
        else
        {
            printf("Book not found.\n");
        }

        printf("\n");
        printf("To exit enter '1' or to continue enter '0'.\n");
        scanf("%d", &choice);
        printf("\n");
        book_found=1;
    } while (choice != 1);
    
    // Library management system ends here.
    
    
    return 0;
}
//main function ends here
