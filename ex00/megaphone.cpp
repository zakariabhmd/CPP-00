#include <iostream>
#include <string>

int main(int ac, char **av) 
{
    int i = 1;
    int j;

    if(ac > 1)
    {
        while (i < ac)
        {
            std::string str = av[i];
            j = 0;
            while(str[j])
            {
                str[j] = std::toupper(str[j]);
                j++;
            }
            std::cout << str;
            i++;
        }
        std::cout << std::endl;
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
}
