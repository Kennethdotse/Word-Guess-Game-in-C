#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*
if you see this try to read through the code, run it and then add some functionalities to make it just better.
Below are the list of things we'd need to make this game better.
1. buildup for different levels
2. develop the score for the user at every level of this game.
3. Fantasy -- the user could unlock a certain level if only the score passes a certain threshold
4. Use files to store the arrays to make the code look clean.
5. You can add yours.

Please remember to break things. That's one way to make them
*/

// Function to select a random word from an array of words
char *choose_word(char *countryNames[], int num_words) {
 srand(time(NULL));
 int random_index = (rand()*rand()) %num_words;
 return countryNames[random_index];
}

// function to compare strings prototype(declaration)
int compareStrings(char str1[], char str2[]);

int useState;

// The arrays used:
char *AfricanCountries[]=
{
"Algeria", "Angola", "Benin", "Botswana", "Burkina Faso",
"Burundi", "Cabo Verde", "Cameroon", "Central African Republic (CAR)", "Chad",
"Comoros", "Democratic Republic of the Congo (DRC)", "Republic of the Congo", "Cote d'Ivoire",
"Djibouti", "Egypt", "Equatorial Guinea", "Eritrea", "Eswatini (formerly Swaziland)",
"Ethiopia", "Gabon", "Gambia", "Ghana", "Guinea", "Guinea Bissau", "Kenya", "Lesotho",
"Liberia", "Libya", "Madagascar", "Malawi", "Mali", "Mauritania", "Mauritius",
"Morocco", "Mozambique", "Namibia", "Niger", "Nigeria", "Rwanda", "Sao Tome and Principe",
"Senegal", "Seychelles", "Sierra Leone", "Somalia", "South Africa",
"South Sudan", "Sudan", "Tanzania", "Togo", "Tunisia", "Uganda", "Zambia", "Zimbabwe"
};

char *asianCountries[] = {"Afghanistan", "Armenia", "Azerbaijan","Bahrain", "Bangladesh",
    "Bhutan", "Brunei", "Cambodia","China", "Cyprus", "Georgia","India", "Indonesia", "Iran",
    "Iraq", "Israel", "Japan","Jordan", "Kazakhstan","Kuwait", "Kyrgyzstan", "Laos",
    "Lebanon", "Malaysia","Maldives", "Mongolia","Myanmar (Burma)", "Nepal",
    "North Korea", "Oman","Pakistan", "Palestine","Philippines", "Qatar", "Russia",
    "Saudi Arabia", "Singapore","South Korea", "Sri Lanka","Syria", "Taiwan", "Tajikistan",
    "Thailand","Timor-Leste","Turkey","Turkmenistan","United Arab Emirates","Uzbekista","Yemen","Vietnam"};

char *europeanCountries[] = {"Albania",
"Andorra", "Austria", "Belarus",
"Belgium", "Bosnia and Herzegovina", "Bulgaria",
"Croatia", "Cyprus", "Czech Republic", "Denmark", "Estonia",
"Finland", "France", "Germany", "Greece", "Hungary", "Iceland",
"Ireland", "Italy", "Kosovo", "Latvia", "Liechtenstein",
"Lithuania", "Luxembourg", "Malta", "Moldova", "Monaco", "Montenegro", "Netherlands",
"North Macedonia","Norway","Poland", "Portugal", "Romania", "Russia", "San Marino", "Serbia",
"Slovakia", "Slovenia", "Spain", "Sweden", "Switzerland",
"Ukraine", "United Kingdom", "Vatican City"};

char *antarcticCountries[] = {"Argentina", "Australia", "Chile", "France",
"New Zealand","Norway", "United Kingdom", "United States of America"};

char *northAmericanCountries[] =
{"Antigua and Barbuda","Bahamas", "Barbados", "Belize", "Canada", "Costa Rica",
"Cuba", "Dominica", "Dominican Republic", "El Salvador", "Grenada", "Guatemala", "Haiti",
"Honduras", "Jamaica", "Mexico", "Nicaragua","Panama", "Saint Kitts and Nevis",
"Saint Lucia", "Saint Vincent and the Grenadines", "Trinidad and Tobago", "United States of America (USA)"};

char *australianCountries []= {"Australia", "Fiji", "Kiribati", "Marshall Islands", "Micronesia",
"Nauru", "New Zealand", "Palau", "Papua New Guinea", "Samoa",
"Solomon Islands", "Tonga", "Tuvalu", "Vanuatu"};

char *southAmericanCountries[] = {"Argentina", "Bolivia", "Brazil","Chile", "Colombia", "Ecuador",
"Guyana", "Paraguay", "Peru","Suriname", "Uruguay","Venezuela"};

char *easy_african_countries[]=
{
    "Algeria", "Angola", "Benin", "Botswana",
    "Burundi", "Cameroon","Chad", "Egypt", "Equatorial Guinea","Comoros",
    "Ethiopia", "Gabon", "Gambia", "Ghana", "Guinea", "Kenya", "Lesotho",
    "Morocco", "Mozambique", "Namibia", "Niger", "Nigeria", "Rwanda",
    "Liberia", "Libya","Mali", "Senegal", "Seychelles", "Somalia",
    "Sudan", "Tanzania", "Togo", "Tunisia", "Uganda", "Zambia", "Zimbabwe"
};

char *easy_asian_countries[]=
{
    "Afghanistan","Armenia","Bahrain","Bangladesh","Bhutan","Brunei",
    "China","Georgia","India", "Indonesia", "Iran",
    "Iraq", "Israel", "Japan","Jordan","Kuwait","Laos",
    "Lebanon","Malaysia","Maldives", "Mongolia", "Nepal",
    "Oman","Pakistan","Palestine","Qatar", "Russia",
    "Singapore","Syria","Taiwan","Thailand","Turkey","Yemen","Vietnam"
};

char *continents[]=
{
    "an African","an Asian","a North American","an European","an Australian","an Antarctic","a South American"
};


//int easyCountryName();

// Size of the arrays
int size0 = sizeof(easy_african_countries)/ sizeof(easy_african_countries[0]);
int size1 = sizeof(easy_asian_countries)/ sizeof(easy_asian_countries[0]);
int size2 = sizeof(northAmericanCountries)/ sizeof(northAmericanCountries[0]);
int size3 = sizeof(europeanCountries)/ sizeof(europeanCountries[0]);
int size4 = sizeof(australianCountries)/ sizeof(australianCountries[0]);
int size5 = sizeof(antarcticCountries)/ sizeof(antarcticCountries[0]);
int size6 = sizeof(southAmericanCountries)/ sizeof(southAmericanCountries[0]);

//function to remove white spaces from the string
void removeSpaces2(char* str){
    char* dest = str;
    int len = strlen(str);
    // skip over any leading spaces
    while (*str ==  ' '){
        str++;
    }
    //copy non-space characters to the destination pointer
    while(*str){
        if (*str != ' '){
            *dest++ = *str;
        }
        str++;
    }
    //remove trailing whitespaces
    while(len>0 && dest[-1]== ' '){
        len--;
        dest--;
    }
        dest[len] = '\0';
}

//easy country name function. This runs when the user selects the easy level and select countries.
int easyCountryName(char *easy[], char *cont[],int size);

//global variables
randAlphaIndex;


int main()
{
    //display the game options to the user
    char level[2];
    char gameType[2];
    int gameNum;
    char levelNum;

    printf("\t\t\t\tWelcome to the Hangman Game! :)\n\n");
    //Loading...
    printf("Loading");
    for (int dot = 0;dot<=3;dot++)
    {
        printf(".");
        usleep(350000);
    }
    printf("\n\nPlease Select your clue\n1.Names Of Countries\n2.Names of people\n3.Names of Games.\nPlease enter your choice: ");
    fgets(gameType,5,stdin);
    gameType[strcspn(gameType,"\n")] = '\0';
    sscanf(gameType, "%d", &gameNum);
    //printf("%d\n", gameNum);
    printf("\nDifficulty level\n1.Easy\n2.Normal\n3.Hard.\nPlease enter your choice: ");
    fgets(level,5,stdin);
    level[strcspn(level,"\n")] = '\0';
    sscanf(level," %c", &levelNum);

    do
    {

    srand(time(NULL));


    int found ;
    char *cont= choose_word(continents,7);

    // play the game
    switch (gameNum)
    {
    case 1:
        if(levelNum == '1'){
            if(strcmp(cont,continents[0])==0)
        {
            found = easyCountryName(easy_african_countries,continents[0],size0);
            //break;
        }else if(strcmp(cont,continents[1])==0)
        {
            found = easyCountryName(easy_asian_countries,continents[1],size1);
            //break;
        }else if(strcmp(cont,continents[2])==0)
        {
            found = easyCountryName(northAmericanCountries,continents[2],size2);
            //break;
        }else if(strcmp(cont,continents[3])==0)
        {
            found = easyCountryName(europeanCountries,continents[3],size3);
            //break;
        }else if(strcmp(cont,continents[4])==0)
        {
            found = easyCountryName(australianCountries,continents[4],size4);
            //break;
        }else if(strcmp(cont,continents[5])==0)
        {
            found = easyCountryName(antarcticCountries,continents[5],size5);
            //break;
        }else if(strcmp(cont,continents[6])==0)
        {
            found = easyCountryName(southAmericanCountries,continents[6],size6);
            //break;
        }

    }

         //found = easyCountryName();
            if (found)
            {
                printf("\nCongratulations you guessed right\n");
                break;
            }
            break;

            }
        useState = 1;
    } while(useState>0);

    return 0;
}

// function definition
int easyCountryName(char *easy[], char *cont[],int size)
{
    char alpha1;
    char alpha2;

    // Take user input
    char user_input[100];
    char* easy_countryName = choose_word(easy,size);

    int x;
    for (x=0;x<strlen(easy_countryName);x++)
    {
        alpha1 = easy_countryName[0];
        alpha2 = easy_countryName[strlen(easy_countryName)-1];
    }

    int word_len = strlen(easy_countryName);
    printf("\nHere's your first clue...\n");
    printf("Guess %s country with %d letters that begins with %c and ends with %c: ",cont,word_len, alpha1, alpha2);
    fgets(user_input,100, stdin);

    //remove newline character error from correct answer
    int tries= 0;
    user_input[strcspn(user_input,"\n")] = '\0';
    int y;

            // remove whitespaces from the string
            removeSpaces2(user_input);

            // compare the strings
            y = compareStrings(user_input,easy_countryName);

    return y;
}

int compareStrings(char str1[], char str2[])
{
    int i;
    int x=0;
    again:
    str1[strcspn(str1,"\n")] = '\0';

    for(i=0;str1[i]!='\0'&& str2[i] != '\0';i++)
        {
        if (str1[i] != str2[i]){
            if(x<3)
            {
             ++x;
             printf("Incorrect guess.You have %d more tries\n",3-x);
             printf("Try again: ");
             fgets(str1,100,stdin);
             goto again;
            }
             else if (x==3)
                {printf("\nThe correct guess is %s",str2);
                return 0;}
        }
    } if(str1[i]=='\0' && str2[i] == '\0'){
    return 1;
    }
}


//Humphrey are you satisfied? :(




