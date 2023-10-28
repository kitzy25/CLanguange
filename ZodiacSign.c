#include <stdio.h>
#include <string.h>

int main (){

    char m[100];
    printf("Enter Your Birth Month\n");
    scanf("%s", m);

    int day;
    printf("Enter Your Birth Day\n");
    scanf("%d", &day);
    
    char* sign;
    if ((strcmp(m, "December") == 0 && day >= 22) || (strcmp(m, "January") == 0 && day <= 19) )
    {
        sign = "Capricorn";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    } else if ((strcmp(m, "January") == 0 && day >= 20) || (strcmp(m, "February") == 0 && day <= 18))
    {
        sign = "Aquarius";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
    } else if ((strcmp(m, "February") == 0 && day >= 19) || (strcmp(m, "March") == 0 && day <= 20))
    {
       sign = "Pisces";
       if (day > 29)
        {
            sign = "Invalid";
        }
        
    } else if ((strcmp(m, "March") == 0 && day >= 21) || (strcmp(m, "April") == 0 && day <= 19))
    {
        sign = "Aries";
        if (day > 31)
        {
            sign = "Invalid";
        }
    
    } else if ((strcmp(m, "April") == 0 && day >= 20) || (strcmp(m, "May") == 0 && day <= 20))
    {
        sign = "Taurus";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
    } else if ((strcmp(m, "May") == 0 && day >= 21) || (strcmp(m, "June") == 0 && day <= 20))
    {
        sign = "Gemini";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    } else if ((strcmp(m, "June") == 0 && day >= 21) || (strcmp(m, "July") == 0 && day <= 22))
    {
        sign = "Cancer";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    } else if ((strcmp(m, "July") == 0 && day >= 23) || (strcmp(m, "August") == 0 && day <= 22))
    {
        sign = "Leo";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    }else if ((strcmp(m, "August") == 0 && day >= 23) || (strcmp(m, "September") == 0 && day <= 22))
    {
        sign = "Virgo";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    }else if ((strcmp(m, "September") == 0 && day >= 23) || (strcmp(m, "October") == 0 && day <= 22))
    {
        sign = "Libra";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    }else if ((strcmp(m, "October") == 0 && day >= 23) || (strcmp(m, "November") == 0 && day <= 21))
    {
        
        sign = "Scorpio";
        if (day > 31)
        {
            sign = "Invalid";
        }
        
        
    } else if ((strcmp(m, "November") == 0 && day >= 22) || (strcmp(m, "December") == 0 && day <= 21))
    {
       sign = "Sagittarius";
       if (day > 31)
        {
            sign = "Invalid";
        }
    
    } else{
        printf("Invalid\n");
        return 1;
    } 
    
    printf("Zodiac Sign : %s\n", sign);
    
    return 0;
}