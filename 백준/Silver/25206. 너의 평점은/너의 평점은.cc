#include <stdio.h>

float get_score(char* grade)
{
    if (grade[0] != 'F')
    {
        if (grade[1] == '+')
            return 'F' - grade[0] - 0.5;
        else if (grade[1] == '0')
            return 'F' - grade[0] - 1;
    }
    return 0;
}

int main()
{
    char subject[51], grade[2];
    float hakjum, hakjum_sum = 0;
    double all_sum = 0;

    for (int i = 0; i < 20; i++)
    {
        scanf("%s %f %s", subject, &hakjum, grade);
        if (grade[0] != 'P')
        {
            hakjum_sum += hakjum;
            all_sum += hakjum * get_score(grade);
        }
    }
    printf("%.6f\n", all_sum / hakjum_sum);
}