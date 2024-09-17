
//Libraries
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// structure for product name, price, quantity, code.
typedef struct
   {
    char name[100];
    float price;
    int amount;
    int item_name;
 }

// structure for the cart of products
product;
typedef struct
    {
      float price;
      int amount;
      int item_name;
    }cart;


//Declarations for the products
product A ={"A", 3.50, 10, 1};
product B ={"B", 5.25, 10, 2};
product C ={"C", 6.75, 10, 3};
product D ={"D", 8.50, 10, 4};
product E ={"E", 9.00, 10, 5};

//declarations for the cart
cart c1; //A
cart c2; //B
cart c3; //C
cart c4; //D
cart c5; //E

//Functions
void print_menu();
void print_list_products();
int add_item();
void display_cart();
int delete_item();
void check_out();
void total_selling();
//main program
int main(void)
{
    int option;

    do
    {
      print_menu();
      printf("Enter An Option: ");
      scanf("%d",& option);

      //if/else statments
    if( option == 1)
      {
          print_list_products();
      }
    else if( option == 2)
      {
         add_item();
      }
    else if( option == 3)
      {
         display_cart();
      }
    else if( option == 4)
      {
          delete_item();
      }
    else if( option == 5)
      {
         checkout();
         break;
      }
    else if( option == 6)
      {
         total_selling();
      }

    }while( option != 0);

    return 0;
}

// prints list
void print_menu()
{

    printf("=================================================================\n");
    printf("1- List All Products\n");
    printf("2- Add Items to Cart\n");
    printf("3- Display Items In Cart\n");
    printf("4- Delete Item from Cart\n");
    printf("5- Check Out\n");
    printf("6- Total Selling Value\n");
    printf("0- Exit\n\n");
}

//prints food cart
void print_list_products()
{
    int back; // to get back to list

    do
    {
    printf("=================================================================\n");
    printf("Product \t\t Price \t\tAmount\t item no.\n\n");
    printf("%s\t\t\t",A.name);
    printf("%.2f$\t\t",A.price);
    printf("%d\t\t",A.amount);
    printf("%d\n",A.item_name);

    printf("%s\t\t\t",B.name);
    printf("%.2f$\t\t",B.price);
    printf("%d\t\t",B.amount);
    printf("%d\n",B.item_name);

    printf("%s\t\t\t",C.name);
    printf("%.2f$\t\t",C.price);
    printf("%d\t\t",C.amount);
    printf("%d\n",C.item_name);

    printf("%s\t\t\t",D.name);
    printf("%.2f$\t\t",D.price);
    printf("%d\t\t",D.amount);
    printf("%d\n",D.item_name);


    printf("%s\t\t\t",E.name);
    printf("%.2f$\t\t",E.price);
    printf("%d\t\t",E.amount);
    printf("%d\n\n",E.item_name);

    printf("To get back to the list press (0):");
    scanf("%d", &back);

    }while(back!=0);// the list of products will remain showing until the user enters (0)

}

// addition function
int add_item()
{

    int c = 0, amount = 0;

    printf("=================================================================\n");
    printf("To get back to the list press (0):\n");
    do{
      printf("Item Number: ");
      scanf("%d", &c);
      if(c == 0)
      {
          break;
      }

      printf("Amount: ");
      scanf("%d",&amount);

      if(c == 1)
      {
          if(amount > A.amount)
          {
              printf("no enough amount!!\n\n");
              break;
          }
          c1.item_name = 1;
          c1.amount += amount;
          c1.price = c1.amount*A.price;

          A.amount -= amount;
          printf("\nItem Added !!\n\n");

      }
      else if(c == 2)
      {
          if(amount > B.amount)
          {
              printf("no enough amount!!\n\n");
              break;
          }
          c2.item_name = 2;
          c2.amount += amount;
          c2.price = c2.amount*B.price;

          B.amount -= amount;
          printf("\nItem Added !!\n\n");
      }
      else if(c == 3)
      {
         if(amount > C.amount)
          {
             printf("no enough amount!!\n\n");
              break;
          }
          c3.item_name = 3;
          c3.amount += amount;
          c3.price = c3.amount*C.price;

          C.amount -= amount;
           printf("\nItem Added !!\n\n");
      }
      else if(c == 4)
      {
        if(amount > D.amount)
          {
             printf("no enough amount!!\n\n");
              break;
          }
          c4.item_name =4;
          c4.amount += amount;
          c4.price = c4.amount*D.price;

          D.amount -= amount;
           printf("\nItem Added !!\n\n");
      }
      else if(c == 5)
      {
        if(amount > E.amount)
          {
               printf("no enough amount!!\n\n");
              break;
          }
          c5.item_name = 5;
          c5.amount += amount;
          c5.price = c5.amount*E.price;

          E.amount -= amount;
        printf("\nItem Added !!\n\n");
      }
      else
      {
          printf("Invalid Choice\n\n");
      }

    }while(c!=0);

}
void display_cart()
{
    int back;

    do{
    printf("=================================================================\n");
    printf("Product\t\t amount\t\t item no.\t Total Price\n\n");


    if(c1.amount>0)
    {
     printf("    A\t\t");
     printf("    %d\t\t", c1.amount);
     printf("    %d\t\t", c1.item_name);
     printf("    %.2f$\n", c1.price);
    }

    if(c2.amount>0)
    {
     printf("    B\t\t");
     printf("    %d\t\t", c2.amount);
     printf("    %d\t\t", c2.item_name);
     printf("    %.2f$\n", c2.price);
    }

    if(c3.amount>0)
    {
     printf("    C\t\t");
     printf("    %d\t\t", c3.amount);
     printf("    %d\t\t", c3.item_name);
     printf("    %.2f$\n", c3.price);
    }

    if(c4.amount>0)
    {
     printf("    D\t\t");
     printf("    %d\t\t", c4.amount);
     printf("    %d\t\t", c4.item_name);
     printf("    %.2f$\n", c4.price);
    }

    if(c5.amount>0)
    {
     printf("    E\t\t");
     printf("    %d\t\t", c5.amount);
     printf("    %d\t\t", c5.item_name);
     printf("    %.2f$\n", c5.price);
    }

     printf("\n to get back to the list press (0): ");
     scanf("%d", &back);
    }while(back != 0);

}
int delete_item()
{
    int c = 0, amount = 0;
    printf("=================================================================\n");
    printf("\nEnter the item no. of the Product: ");
    printf("(1)A || (2)B || (3)C || (4)D || (5)E\n\n");
    printf("to get back to the list press (0) \n\n");
    do{
      scanf("%d", &c);

      if(c == 0)
      {
          break;
      }

      printf("Enter Amount: ");
      scanf("%d",&amount);

      if(c == 1)
      {
          if(amount > c1.amount)
          {
              printf("\nNo enough amount!!\n\n");
              break;
          }
          c1.amount -= amount;
          c1.price = c1.amount*A.price;

          A.amount += amount; //puts the removed products back from the cart to the amount

          printf("\nItem has been removed!!\n\n");

      }
      else if(c == 2)
      {
         if(amount > c2.amount)
          {
              printf("\nNo enough amount!!\n\n");
              break;
          }
          c2.amount -= amount;
          c2.price = c2.amount*B.price;

          B.amount += amount; //puts the removed products back from the cart to the amount

          printf("\nItem has been removed!!\n\n");

      }
      else if(c == 3)
      {
         if(amount > c3.amount)
          {
              printf("\nNo enough amount!!\n\n");
              break;
          }
          c3.amount -= amount;
          c3.price = c3.amount*C.price;

          C.amount += amount; //puts the removed products back from the cart to the amount


          printf("\nItem has been removed!!\n\n");
      }
      else if(c == 4)
      {
        if(amount > c4.amount)
          {
              printf("\nNo enough amount!!\n\n");
              break;
          }
          c4.amount -= amount;
          c4.price = c4.amount*D.price;

          D.amount += amount; //puts the removed products back from the cart to the amount

          printf("\nItem has been removed!!\n\n");
      }
      else if(c == 5)
      {
        if(amount > c5.amount)
          {
              printf("\nNo enough amount!!\n\n");
              break;
          }
          c5.amount -= amount;
          c5.price = c5.amount*E.price;

          E.amount += amount;

          printf("\Item has been removed!!\n\n");
      }
      else
      {
          printf("invalid choice\n\n");
      }

     }while(c!=0);
}

void checkout()
{
    float sum = 0,  total = 0;

    printf("=================================================================\n");
    printf("Product\t\tAmount\t     item no.\t     Total Price\n\n");


    if(c1.amount>0)
    {
      printf("A\t\t");
      printf("%d\t\t", c1.amount);
      printf("%d\t\t", c1.item_name);
      printf("%.2f\n", c1.price);
      sum += (c1.amount*A.price);//sums the total price by calculating the amount
    }

    if(c2.amount>0)
    {
      printf("B\t\t");
      printf("%d\t\t", c2.amount);
      printf("%d\t\t", c2.item_name);
      printf("%.2f\n", c2.price);
      sum += (c2.amount*B.price); //sums the total price by calculating the amount

     }

    if(c3.amount>0)
    {
      printf("C\t\t");
      printf("%d\t\t", c3.amount);
      printf("%d\t\t", c3.item_name);
      printf("%.2f\n", c3.price);
      sum += (c3.amount*C.price); //sums the total price by calculating the amount

     }

    if(c4.amount>0)
    {
      printf("D\t\t");
      printf("%d\t\t", c4.amount);
      printf("%d\t\t", c4.item_name);
      printf("%.2f\n", c4.price);
      sum += (c4.amount*D.price); //sums the total price by calculating the amount
         }

    if(c5.amount>0)
    {
      printf("E\t\t");
      printf("%d\t\t", c5.amount);
      printf("%d\t\t", c5.item_name);
      printf("%.2f\n", c5.price);
      sum += (c5.amount*E.price); //sums the total price by calculating the amount

    }

    printf("\n");
    printf("Total = %.2f$\t", sum);

}
void total_selling()
{
    float sum = 0,  total = 0, x;

    do{
    printf("=================================================================\n");
    printf("Product\t\t amount\t\titem no.\t Total Price\n\n");


    if(c1.amount>0)
    {
      printf("    A\t\t");
      printf("    %d\t\t", c1.amount);
      printf("    %d\t\t", c1.item_name);
      printf("    %.2f\n", c1.price);
      sum += (c1.amount*A.price); //sums the total price by calculating the amount
    }

    if(c2.amount>0)
    {
      printf("    B\t\t");
      printf("    %d\t\t", c2.amount);
      printf("    %d\t\t", c2.item_name);
      printf("    %.2f\n", c2.price);
      sum += (c2.amount*B.price); //sums the total price by calculating the amount
     }

    if(c3.amount>0)
    {
      printf("    C\t\t");
      printf("    %d\t\t", c3.amount);
      printf("    %d\t\t", c3.item_name);
      printf("    %.2f\n", c3.price);
      sum += (c3.amount*C.price); //sums the total price by calculating the amount
     }

    if(c4.amount>0)
    {
      printf("    D\t\t");
      printf("    %d\t\t", c4.amount);
      printf("    %d\t\t", c4.item_name);
      printf("    %.2f\n", c4.price);
      sum += (c4.amount*D.price); //sums the total price by calculating the amount
    }

    if(c5.amount>0)
    {
      printf("    E\t\t");
      printf("    %d\t\t", c5.amount);
      printf("    %d\t\t", c5.item_name);
      printf("    %.2f\n", c5.price);
      sum += (c5.amount*E.price); //sums the total price by calculating the amount
    }

    printf("\n");
    printf("Total = %.2f$\t", sum);

    printf("\n to get back to the list press (0): ");
    scanf("%d", &x);

    }while(x != 0);
}

