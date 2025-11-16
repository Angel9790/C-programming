#include<stdio.h>
void main()
{
    long long total_population=1441981744;
    long long population_of_women=total_population*(48.8/100);
    long long population_of_men=total_population-population_of_women;
    long long total_lit_rate = total_population*(85.95/100);
    long long litarecy_rate_men = population_of_men*(80.95/100);
    long long litarecy_rate_women = population_of_women*(62.84/100);

    printf("Total population is: %lld\n",total_population);
    printf("Total women population is: %lld\n",population_of_women);
    printf("Total men population is: %lld\n",population_of_men);
    printf("Total literate Rate : %lld\n",total_lit_rate);
    printf("Total literecy women : %lld\n",litarecy_rate_women);
    printf("Total literecy men : %lld\n",litarecy_rate_men);
    printf("Total illitaret women: %lld\n",population_of_women-litarecy_rate_women);
    printf("Total illitaret men: %lld\n",population_of_men-litarecy_rate_men);
    printf("this program is made by Angel Bavarva 25TCE28B");

}

