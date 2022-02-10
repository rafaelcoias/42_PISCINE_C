#include <unistd.h>
#include <stdio.h>

void    check_2_1_col(int *a, int tab[4][4])
{
    if ((a[0] + a[4]) == 3)
    {
        if (a[0] == 2)
        {
            tab[0][0] = 3;
        }
        else
            tab[3][0] = 3;
    }
    if ((a[1] + a[5]) == 3)
    {
        if (a[1] == 2)
        {
            tab[0][1] = 3;
        }
        else
            tab[3][1] = 3;
    }
    if ((a[2] + a[6]) == 3)
    {
        if (a[2] == 2)
        {
            tab[0][2] = 3;
        }
        else
            tab[3][2] = 3;
    }
    if ((a[3] + a[7]) == 3)
    {
        if (a[3] == 2)
        {
            tab[0][3] = 3;
        }
        else
            tab[3][3] = 3;
    }
}

void    check_2_1_row(int *a, int tab[4][4])
{
    if ((a[8] + a[12]) == 3)
    {
        if (a[8] == 2)
        {
            tab[0][0] = 3;
        }
        else
            tab[0][3] = 3;
    }
    if ((a[9] + a[13]) == 3)
    {
        if (a[9] == 2)
        {
            tab[1][0] = 3;
        }
        else
            tab[1][3] = 3;
    }
    if ((a[10] + a[14]) == 3)
    {
        if (a[10] == 2)
        {
            tab[2][0] = 3;
        }
        else
            tab[2][3] = 3;
    }
    if ((a[11] + a[15]) == 3)
    {
        if (a[11] == 2)
        {
            tab[3][0] = 3;
        }
        else
            tab[3][3] = 3;
    }
}

int    check_row(int tab[4][4], int col, int lin)
{
    col = 0;
    while (col < 4)
    {
        if (tab[lin][col] == 4)
        {
            return (0);
        }
        col++;
    }
    return (1);
}

int    check_colum(int tab[4][4], int col, int lin)
{
    lin = 0;
    while (lin < 4)
    {
        if (tab[lin][col] == 4)
        {
            return (0);
        }
        lin++;
    }
    return (1);
}

void    check_4_aft_3(int *a, int tab[4][4])
{
    int     lin;
    int     col;
    int     j;

    //Colocar 4 na 3a casa apos o 3
    //Coluna up
    j = 0;
    col = 0;
    while (j < 4)
    {
        if (a[j] == 3)
        {
            if (tab[2][col] == 0)
            {
                if (check_row(tab, col, 2))
                {
                    tab[2][col] = 4;
                }
            }
        }
        j++;
        col++;
    }
    //Coluna down
    col = 0;
    while (j > 3 && j < 8)
    {
        if (a[j] == 3)
        {
            if (tab[1][col] == 0)
            {
                if (check_row(tab, col, 1))
                {
                    tab[1][col] = 4;
                }
            }
        }
        j++;
        col++;
    }
    //Linha left
    lin = 0;
    while (j > 7 && j < 12)
    {
        if (a[j] == 3)
        {
            if (tab[lin][2] == 0)
            {
                if (check_colum(tab, 2, lin))
                {
                    tab[lin][2] = 4;
                }
            }
        }
        j++;
        lin++;
    }
    //Linha right
    lin = 0;
    while (j > 11 && j < 16)
    {
        if (a[j] == 3)
        {
            if (tab[lin][1] == 0)
            {
                if (check_colum(tab, 1, lin))
                {
                    tab[lin][1] = 4;
                }
            }
        }
        j++;
        lin++;
    }
}

void    check_last(int tab[4][4])
{
    int     lin;
    int     col;
    int     i;
    int     sum;
    int     lin2;
    int     col2;

    //Ver o que falta a cada coluna
    col = 0;
    while (col < 4)
    {
        lin = 0;
        i = 0;
        sum = 0;
        while (lin < 4)
        {
            if (tab[lin][col] != 0)
            {
                sum = sum + tab[lin][col];
                i++;
            }
            if (i == 3)
            {
                lin2 = 0;
                while (lin2 < 4)
                {
                    if (tab[lin2][col] == 0)
                    {
                        tab[lin2][col] = 10 - sum;
                    }
                    lin2++;
                }
            }
            lin++;
        }
        col++;
    }
    //Ver o que falta a cada linha
    lin = 0;
    while (lin < 4)
    {
        col = 0;
        sum = 0;
        i = 0;
        while (col < 4)
        {
            if (tab[lin][col] != 0)
            {
                sum = sum + tab[lin][col];
                i++;
            }
            if (i == 3)
            {
                col2 = 0;
                while (col2 < 4)
                {
                    if (tab[lin][col2] == 0)
                    {
                        tab[lin][col2] = 10 - sum;
                    }
                    col2++;
                }
            }
            col++;
        }
        lin++;
    }
}

void    check_1(int *a, int tab[4][4])
{
    int     lin;
    int     col;
    int     j;

    //Ver se ha 1 nas colunas (up)
    j = 0;
    col = 0;
    while (j < 4)
    {
        lin = 0;
        if (a[j] == 1)
        {
            tab[lin][col] = 4;
        }
        j++;
        col++;
    }
    //Ver se ha 1 nas colunas (low)
    col = 0;
    while (j > 3 && j < 8)
    {
        lin = 3;
        if (a[j] == 1)
        {
            tab[lin][col] = 4;
        }
        j++;
        col++;
    }
    //Ver se ha 1 nas linhas (left)
    lin = 0;
    while (j > 7 && j < 12)
    {
        col = 0;
        if (a[j] == 1)
        {
            tab[lin][col] = 4;
        }
        j++;
        lin++;
    }
    //Ver se ha 1 nas linhas (right)
    lin = 0;
    while (j > 11 && j < 16)
    {
        col = 3;
        if (a[j] == 1)
        {
            tab[lin][col] = 4;
        }
        j++;
        lin++;
    }
}

void    check_4(int *a, int tab[4][4])
{
    int     lin;
    int     col;
    int     j;
    int     i;

    //Ver se ha 4 nas colunas (up)
    j = 0;
    col = 0;
    i = 0;
    while (j < 4)
    {
        lin = 0;
        while (a[j] == 4 && lin < 4)
        {
            tab[lin][col] = i + 1;
            lin++;
            i++;
        }
        j++;
        col++;
    }
    //Ver se ha 4 nas colunas (low)
    col = 0;
    i = 0;
    while (j > 3 && j < 8)
    {
        lin = 3;
        while (a[j] == 4 && lin >= 0)
        {
            tab[lin][col] = i + 1;
            lin--;
            i++;
        }
        j++;
        col++;
    }
    //Ver se ha 4 nas linhas (left)
    lin = 0;
    i = 0;
    while (j > 7 && j < 12)
    {
        col = 0;
        while (a[j] == 4 && col < 4)
        {
            tab[lin][col] = i + 1;
            col++;
            i++;
        }
        j++;
        lin++;
    }
    //Ver se ha 4 nas linhas (right)
    lin = 0;
        i = 0;
    while (j > 11 && j < 16)
    {
        col = 3;
        while (a[j] == 4 && col >= 0)
        {
            tab[lin][col] = i + 1;
            col--;
            i++;
        }
        j++;
        lin++;
    }
}

void    init_tab(int *a, int tab[4][4])
{
    int     lin;
    int     col;

    lin = 0;
    while (lin < 4)
    {
        col = 0;
        while (col < 4)
        {
            tab[lin][col] = 0;
            col++;
        }
        lin++;
    }
    check_4(a, tab);
    check_last(tab);
    check_1(a, tab);
    check_last(tab);
    check_4_aft_3(a, tab);
    check_last(tab);
    check_2_1_col(a, tab);
    check_last(tab);
    check_2_1_row(a, tab);
    check_last(tab);
}

int main(void)
{
    int     a[16] = {3, 2, 1, 2, 1, 3, 2, 2, 2, 2, 3, 1, 2, 2, 1, 3};
    int     tab[4][4];

    init_tab(a, tab);

    int     lin;
    int     col;
    char    c;

    lin = 0;
    while (lin < 4)
    {
        col = 0;
        while (col < 4)
        {
            c = '0' + tab[lin][col];
            write(1, &c, 1);
            if (col == 3)
            {
                write(1, "\n", 1);
            }
            else
                write(1, " ", 1);
            col++;
        }
        lin++;
    }
    return (0);
}
