#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void display(short int[5][5]);
short int getColumn(char);
short int nSeatsAvail(short int[5][5]);

int main()
{
    short int seats[5][5] = {{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0}};
    short int i, choice, cont = 1;
    for (i=0; i< rand()%7; i++)
    {
        short int row = rand()%5;
        short int col = rand()%5;
        seats[row][col] = 1;
        
    }

    while(true)
    {
        display(seats);
        printf("Enter 0 for single seat and 1 for block of seats: ");
        scanf("%hi", &choice);
        if (choice == 0)
        {
            short int row, col;
            char c;
            printf("Enter row and column sperated by space: ");
            scanf("%hi %c", &row, &c);
            col = getColumn(c);

            if (col == -1 || row > 5 || row < 1)
            {
                printf("Invalid seat no.\n");
                continue;
            }

            if (seats[row-1][col-1] == 0)
            {
                printf("Seat is booked\n");
                seats[row-1][col-1] = 1;
                display(seats);
            }
            else
                printf("Seat is already booked\n");
        }
        else if(choice == 1)
        {
            short int isr, row, col;
            int ns;
            char c;
            printf("Enter number of seats required: ");
            scanf("%d", &ns);

            if (ns > nSeatsAvail(seats))
            {
                printf("%d Seats are not available to be booked\n", ns);
                continue;
            }

            printf("Enter 0 for same row and 1 for random: ");
            scanf("%hi", &isr);
            if (isr == 0)
            {
                
                printf("Enter starting row and starting column sperated by space: ");
                scanf("%hi %c", &row, &c);
                col = getColumn(c);

                if (col == -1 || row > 5 || row < 1)
                {
                    printf("Invalid seat no.\n");
                    continue;
                }
                col--;

                if (col+ns > 5)
                {
                    printf("Enough Seats are not available\n");
                    continue;
                }

                bool flag = false;
                for (i = col; i < col+ns; i++)
                    if (seats[row-1][i] == 1)
                    {
                        printf("Seats not available\n");
                        flag = true;
                        break;
                    }

                if (flag)
                    continue;
                

                for (i = col; i < col+ns; i++)
                    seats[row-1][i] = 1;

                printf("Seats are booked\n");
                
            }
            else
            {
                for (int i = 0; i < ns; i++)
                {
                    printf("Enter %dth seat's row and column sperated by space: ", i+1);
                    scanf("%hi %c", &row, &c);
                    col = getColumn(c);

                    if (col == -1 || row > 5 || row < 1)
                    {
                        printf("Invalid seat no.\n");
                        i--;
                        continue;
                    }

                    if (seats[row-1][col-1] == 1)
                    {
                        printf("Seat not available\n");
                        i--;
                        continue;
                    }
                    seats[row-1][col-1] = 1;
                    printf("%dth seat is booked\n", i+1);
                }           
            }
            display(seats);
        }
        else
            printf("Invalid choice\n");

        printf("Enter 1 to continue and 0 to exit: ");
        scanf("%hi", &cont);
        
        if (cont == 0)
            break;
    }
}

void display(short int seats[5][5])
{
    short int i, j;
    printf("  A\tB\tC\tD\tE\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", i+1);
        for(j = 0; j < 5; j++)
            if (seats[i][j] == 0)
                printf("NB\t");
            else
                printf("B\t");
        
        printf("\n");
    }
}

short int getColumn(char c)
{
    if (c == 'A' || c == 'a')
        return 1;
    else if (c == 'B' || c == 'b')
        return 2;
    else if (c == 'C' || c == 'c')
        return 3;
    else if (c == 'D' || c == 'd')
        return 4;
    else if (c == 'E' || c == 'e')
        return 5;
    else
        return -1;
}

short int nSeatsAvail(short int seats[5][5])
{
    short int i, j, avail = 0;
    for (i = 0; i < 5; i++)
        for (j = 0; j < 5; j++)
            if (seats[i][j] == 1)
                avail++;
    return avail;
}