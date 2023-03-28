#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>
#include <unistd.h>

// The arrays used:
char *asianCountries[] = {"Afghanistan", "Armenia", "Azerbaijan","Bahrain", "Bangladesh",
    "Bhutan", "Brunei", "Cambodia","China", "Cyprus", "Georgia","India", "Indonesia", "Iran",
    "Iraq", "Israel", "Japan","Jordan", "Kazakhstan","Kuwait", "Kyrgyzstan", "Laos",
    "Lebanon", "Malaysia","Maldives", "Mongolia","Nepal","North Korea", "Oman","Pakistan", "Palestine","Philippines", "Qatar", "Russia",
    "Singapore","South Korea","Syria", "Taiwan", "Tajikistan",
    "Thailand","Turkey","Turkmenistan","Uzbekista","Yemen","Vietnam"};

char *europeanCountries[] = {"Albania","Andorra", "Austria", "Belarus","Belgium", "Bosnia and Herzegovina","Bulgaria",
"Croatia", "Cyprus", "Denmark", "Estonia","Finland", "France", "Germany", "Greece", "Hungary", "Iceland",
"Ireland", "Italy", "Kosovo", "Latvia", "Liechtenstein","Lithuania", "Luxembourg", "Malta", "Moldova", "Monaco", "Montenegro", "Netherlands",
"Norway","Poland", "Portugal", "Romania", "Russia", "Serbia","Slovakia", "Slovenia", "Spain", "Sweden", "Switzerland","Ukraine"};

char *antarcticCountries[] = {"Argentina", "Australia", "Chile", "France","Norway"};

char *northAmericanCountries[] =
{"Bahamas", "Barbados", "Belize", "Canada", "Costa Rica","Cuba", "Dominica","Grenada", "Guatemala", "Haiti",
"Honduras", "Jamaica", "Mexico", "Nicaragua","Panama"};

char *australianCountries []= {"Australia", "Fiji", "Kiribati","Micronesia",
"Nauru", "New Zealand", "Palau", "Samoa","Tonga", "Tuvalu", "Vanuatu"};

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
    "an African country","an Asian country","a North American country","an European country","an Australian country","an Antarctic country","a South American country"
};

char *animals[]=
{
    "a reptile","a mammal","a bird","an amphibian","an aquatic animal"
};

char* reptiles[] = {"Snake","Crocodile","Lizard","Turtle","Gecko","Iguana"};
char* mammals[] = {"Giraffe", "Elephant", "Lion", "Tiger","Dolphin", "Whale", "Kangaroo", "Horse", "Monkey"};
char* birds[] = {"Penguin", "Eagle","Ostrich", "Parrot", "Hummingbird","Flamingo", "Seagull"};
char* amphibians[] = {"Frog","Salamander", "Toad", "Newt","Caecilian", "Tree Frog"};
char* aquaticAnimals[] = {"Fish","Shark", "Octopus", "Dolphin","Seahorse", "Jellyfish"};

 //char *fruits[] = {"apple", "banana", "cherry", "kiwi", "mango", "orange", "pear", "plum", "peach", "grape",
//"pineapple", "strawberry", "blueberry", "raspberry", "watermelon", "melon", "papaya", "apricot"};

char* fruits[]={"a citrus fruit","a berry","a tropical fruit enriched with vitamin-C","a stone fruit","a melon","a green round fruit","a red round fruit"};

char *citrus_fruits[] = {"orange", "lemon", "lime"};
char *berries[] = {"strawberry", "blueberry", "raspberry", "blackberry"};
char *tropical_fruits[] = {"mango", "pineapple", "papaya", "banana"};
char *stone_fruits[] = {"peach", "plum", "cherry", "apricot"};
char *melons[] = {"watermelon", "cantaloupe", "honeydew"};
char *apples_and_pears[] = {"apple", "pear"};
char *grapes[] = {"grapes"};

char *randomWords[] = {"elephant", "furniture", "telephone", "umbrella", "landscape", "algorithm",
"giraffe", "puzzle", "butterfly", "mermaid", "octopus", "treasure", "dragon", "penguin",
"moonlight", "jungle", "rainbow", "volcano", "astronomy", "backpack", "cinnamon",
"dolphin", "echo", "flamingo", "guitar", "hurricane", "igloo",
"jaguar", "kangaroo", "leopard", "mountain", "narwhal", "ocean",
"paradise", "quicksilver", "rainforest", "scorpion", "tiger",
"unicorn", "violet", "whale", "xylophone", "yacht", "zebra"};


int size_random = sizeof(randomWords)/ sizeof(randomWords[0]);

// Size of the arrays
int size1a = sizeof(easy_african_countries)/ sizeof(easy_african_countries[0]);
int size1b = sizeof(easy_asian_countries)/ sizeof(easy_asian_countries[0]);
int size1c = sizeof(northAmericanCountries)/ sizeof(northAmericanCountries[0]);
int size1d = sizeof(europeanCountries)/ sizeof(europeanCountries[0]);
int size1e = sizeof(australianCountries)/ sizeof(australianCountries[0]);
int size1f = sizeof(antarcticCountries)/ sizeof(antarcticCountries[0]);
int size1g = sizeof(southAmericanCountries)/ sizeof(southAmericanCountries[0]);


int size2a = sizeof(reptiles)/ sizeof(reptiles[0]);
int size2b = sizeof(mammals)/ sizeof(mammals[0]);
int size2c = sizeof(birds)/ sizeof(birds[0]);
int size2d = sizeof(amphibians)/ sizeof(amphibians[0]);
int size2e = sizeof(aquaticAnimals)/ sizeof(aquaticAnimals[0]);

int size3a = sizeof(citrus_fruits)/ sizeof(citrus_fruits[0]);
int size3b = sizeof(berries)/ sizeof(berries[0]);
int size3c = sizeof(tropical_fruits)/ sizeof(tropical_fruits[0]);
int size3d = sizeof(stone_fruits)/ sizeof(stone_fruits[0]);
int size3e = sizeof(melons)/ sizeof(melons[0]);
int size3f = sizeof(apples_and_pears)/ sizeof(apples_and_pears[0]);
int size3g = sizeof(grapes)/ sizeof(grapes[0]);



int dispCongrats();
int highestScore(int score);

struct timeval tv;
char *choose_word(char *countryNames[], int num_words);

// function to compare strings prototype(declaration)
int compareStrings(char str1[], char str2[],char str3[]);

//function to remove white spaces from the string
void removeSpaces2(char* str);

int useState;
int score;
int scores[100];

//easy country name function. This runs when the user selects the easy level and select countries.
int easyCountryName(char *easy[], char *cont[],int size);
//level4
int level4(char * easy, int size);



int main()
{
    //display the game options to the user
    char level[2];
    char gameType;
    int gameNum;
    char levelNum;

    int ascore=0;
    int bscore=0;
    int cscore=0;
    int dscore=0;
    int totalScore;
    int x = 0;


    printf("\t\tWelcome to the Hangman Game! :)\n\n");
    //Loading...
    printf("Loading");
    for (int dot = 0;dot<=3;dot++)
    {
        printf(".");
        usleep(350000);
    }
    printf("\r                        \r");

    printf(">>  In this game, you'd have to play each level to proceed to the next.\n>>  Each level contains 3 rounds of guesses.\n>>  Each guess earns you 3 marks.\n>>  If you attain a perfect score for each level,you earn a bonus mark of 5 points.\n>>  For you to proceed onto levels 3 and beyond, you'd have to at least have a total score of not less than 20.\n>>  Each level is difficult than the one it that preceeds it.\n");
    printf("\n\nPlease Enter S to Start, Q to quit: ");
    gameType = getchar();
    //remove any newline character that might be left in the input buffer.
    getchar();

    do
    {
    int found ;
    // play the game
    if (tolower(gameType)=='s')
    {
        //goto skip;
            printf("level One\n");
            printf("\t\tIn this level you're going to guess the names of the most popular countries in the world\n");

        for (int i =1;i<4;i++)
        {
            char *cont= choose_word(continents,7);
             if(strcmp(cont,continents[0])==0)
        {
            found = easyCountryName(easy_african_countries,continents[0],size1a);
            if (found)
                ascore+= dispCongrats(&x);

        }else if(strcmp(cont,continents[1])==0)
        {
            found = easyCountryName(easy_asian_countries,continents[1],size1b);
            if (found){
                ascore+= dispCongrats(&x);}
            //break;
        }else if(strcmp(cont,continents[2])==0)
        {
            found = easyCountryName(northAmericanCountries,continents[2],size1c);
            if (found){
                ascore+=dispCongrats(&x);}
            //break;
        }else if(strcmp(cont,continents[3])==0)
        {
            found = easyCountryName(europeanCountries,continents[3],size1d);
            if (found){
                ascore+=dispCongrats(&x);}
            //break;
        }else if(strcmp(cont,continents[4])==0)
        {
            found = easyCountryName(australianCountries,continents[4],size1e);
            if (found){
               ascore+=dispCongrats(&x);}
            //break;
        }else if(strcmp(cont,continents[5])==0)
        {
            found = easyCountryName(antarcticCountries,continents[5],size1e);
            if (found){
                ascore+=dispCongrats(&x);}
            //break;
        }else if(strcmp(cont,continents[6])==0)
        {
            found = easyCountryName(southAmericanCountries,continents[6],size1f);
            if (found){
                ascore+=dispCongrats(&x);}
            //break;
        }
        }//end of for loop

        if(ascore==9)
           score = ascore + 5;
        else
            score = ascore;
        printf("Your total score is %d\nEnd of level 1\n",score);

        char level2;
        char level3;
        char level_4;

        char no ='n';
        char yes = 'y';
        printf("\n\nLevel 2\n");
        printf("In this level we'd be guessing the name of some animals. I hope you love animals...\n");
        again:
            printf("Do you wish to continue?\nY/N: ");
            level2 = getchar();
            //remove any newline character that might be left in the input buffer.
            getchar();
        if (tolower(level2)==tolower(yes))
        {
        for (int i =1;i<4;i++)
        {
            char *animalia = choose_word(animals,5);
           if(strcmp(animalia,animals[0])==0)
           {
               found = easyCountryName(reptiles,animals[0],size2a);
               if (found){
                bscore += dispCongrats(&x);}
           }
           else if(strcmp(animalia,animals[1])==0)
           {
               found = easyCountryName(mammals,animals[1],size2b);
               if (found){
                bscore += dispCongrats(&x);}
           }
           else if(strcmp(animalia,animals[2])==0)
           {
               found = easyCountryName(birds,animals[2],size2c);
               if (found){
                bscore += dispCongrats(&x);}
           }
           else if(strcmp(animalia,animals[3])==0)
           {
               found = easyCountryName(amphibians,animals[3],size2d);
               if (found){
               bscore += dispCongrats(&x);}
           }
           else if(strcmp(animalia,animals[4])==0)
           {
               found = easyCountryName(aquaticAnimals,animals[4],size2e);
               if (found){
                bscore += dispCongrats(&x);}
           }
        }//end of for loop
        }else if(tolower(level2) == tolower(no)){
            goto end;
        }else{
        printf("\nInvalid input");
        goto again;}

        if(bscore=9){
           score = score + bscore + 5;
            printf("\nYou earned a bonus mark of 5 points.\n");
        }
        else
            score += bscore;
        printf("Your total score is %d",score);

        printf("\n\nLevel 3\n");
        printf("In this level we'd be guessing the names of some fruits. Who knows, you might be guessing your favorite fruit...\n");
        again_1:
            printf("Do you wish to continue?\nY/N: ");
            level3 = getchar();
            //remove any newline character that might be left in the input buffer.
            getchar();
        if (tolower(level3)=='y')
        {
        for (int i =1;i<4;i++)
        {
            char *fru = choose_word(fruits,7);
           if(strcmp(fru,fruits[0])==0)
           {
               found = easyCountryName(citrus_fruits,fruits[0],size3a);
               if (found){
                cscore += dispCongrats(&x);}
           }
           else if(strcmp(fru,fruits[1])==0)
           {
               found = easyCountryName(berries,fruits[1],size3b);
               if (found){
                cscore += dispCongrats(&x);}
           }
           else if(strcmp(fru,fruits[2])==0)
           {
               found = easyCountryName(tropical_fruits,fruits[2],size3c);
               if (found){
                cscore += dispCongrats(&x);}
           }
           else if(strcmp(fru,fruits[3])==0)
           {
               found = easyCountryName(stone_fruits,fruits[3],size3d);
               if (found){
                cscore += dispCongrats(&x);}
           }
           else if(strcmp(fru,fruits[4])==0)
           {
               found = easyCountryName(melons,fruits[4],size3e);
               if (found){
                cscore += dispCongrats(&x);}
           }
            else if(strcmp(fru,fruits[5])==0)
           {
               found = easyCountryName(apples_and_pears,fruits[5],size3f);
               if (found){
                cscore += dispCongrats(&x);}
           }
            else if(strcmp(fru,fruits[6])==0)
           {
               found = easyCountryName(grapes,fruits[6],size3g);
               if (found){
                cscore += dispCongrats(&x);}
           }
        }//end of for loop
        }else if(tolower(level3) == tolower(no)){
            break;
        }else{
        printf("Invalid input\n");
        goto again_1;}

        if(cscore=9){
           score = score + cscore + 5;
            printf("\nYou earned a bonus mark of 5 points.\n");
        }
        else
            score += cscore;
        printf("Your total score is %d",score);

        skip:
            printf("Level 4\nIn this level we'd be guessing general random words. You'd have to enter letters at regular intervals\n");
        printf("Do you wish to continue?\nY/N: ");
        level_4 = getchar();
        //remove any newline character that might be left in the input buffer.
        getchar();
        if (tolower(level_4)=='y'){
            for(int i = 0;i<4;i++){
                found = level4(randomWords,size_random);
                if(found==1)
                dscore = dispCongrats(&x);
            }//end of for loop
        }else if(tolower(level_4) == tolower(no)){
            break;
        }else{
        printf("Invalid input\n");
        goto again_1;}

        if(dscore=9){
           score = score + dscore + 5;
            printf("\nYou earned a bonus mark of 5 points.\n");
        }
        else
            score += dscore;
        printf("\nYour total score is %d",score);



        break;
    }



        useState += 1;
        }
     while(useState>1);
     int gameOver;
    end:
     gameOver = highestScore(score);
     printf("\nGame Over");

    return 0;
}


// Function to select a random word from an array of words
char *choose_word(char *countryNames[], int num_words) {
    gettimeofday(&tv,NULL);
    unsigned int seed = tv.tv_usec;
    srand(seed);
    int random_index = (rand() %num_words);
    return countryNames[random_index];
}

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

// function definition
int easyCountryName(char *easy[], char *arrayName[],int size)
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
    printf("\nHere's your clue...\n");
    printf("Guess %s with %d letters that begins with %c and ends with %c: ",arrayName,word_len, alpha1, alpha2);
    fgets(user_input,100, stdin);

    //remove newline character error from correct answer
    int tries= 0;
    user_input[strcspn(user_input,"\n")] = '\0';
    int y;
    // remove whitespaces from the string
    removeSpaces2(user_input);
    //convert strings to lower cases
    char new_user_input[100];
    char random_word[100];
    //for converting user input to lower
    for(int i=0;i<strlen(user_input);i++){
        new_user_input[i]= tolower(user_input[i]);
    }
    //for converting random word to lower
    for(int i=0;i<strlen(easy_countryName);i++){
        random_word[i]= tolower(easy_countryName[i]);
    }
    new_user_input[strlen(user_input)]='\0';
    random_word[strlen(easy_countryName)]='\0';
    // compare the strings
    y = compareStrings(new_user_input,random_word,easy_countryName);
    return y;
}

// function to compare strings and return 1 if found
int compareStrings(char str1[], char str2[],char str3[])
{   int i;
    int x=1;
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
                {printf("\nThe correct guess is %s",str3);
                return 0;}
        }
    } if(str1[i]=='\0' && str2[i] == '\0'){
    return 1;
    }
}
//function to display congratulations
int dispCongrats(int* num){
    printf("\nCongratulations you guessed right\n");
    static int callcounts =0;
    *num +=3;
    printf("\t\t\t\t\tscore + 3");
    callcounts++;
    usleep(350000);
    printf("\r                                                  \r");

    if (callcounts == 4){
        *num = 0;
        callcounts = 0;
    }
    return *num;
}

// function to add the score of every user to a file
int highestScore(int score)
{
    int num= 0;
    int highest = 0;
    FILE * fpointer = fopen("scoreFile.txt","a");
    fprintf(fpointer, "%d\n",score);

    fclose(fpointer);
 // Open the file for reading
    fpointer = fopen("scoreFile.txt", "r");
 // Loop through the file and check for the highest number
    while (fscanf(fpointer, "%d",&num) != EOF) {
    if (num > highest) {
        highest = num;
        }
    }if(score==highest)
        printf("\n\nYou are the new highest scorer with %d\n", score);
        // Close the file
    fclose(fpointer);
    return 0;
}

/*int level4(char * easy, int size) {
 char* word = choose_word(easy,size);// set the word to be guessed
 int length = strlen(word);
 char guess[100] = {'_', '\0'}; // initialize guess array with underscore
 int incorrect_guesses = 0;
 int next_letter_index = 1; // index of the next letter to be revealed

 char alpha1 = word[0];
 char alpha2= word[strlen(word)-1];

 printf("Guess a word (length %d) begins with %c: %s\n", length, guess, alpha1);

 while (incorrect_guesses < 5)
{ // limit to 5 incorrect guesses
 char input;
 guess[0]= word[0];
 printf("\nThe letter begins with %s\n",guess);

 printf("Enter the next letter: ");
 scanf(" %c", &input); // read in a single character

 int correct_guess = 0;
 for (int i = 1; i < length; i+=2)
{
 if (word[i] == input) {
 guess[i] = input; // update the guess array with the correct guess
 correct_guess = 1;
 }
 }

 if (strlen(guess) < length)
{
 char next_letter = word[next_letter_index]; //generate the next letter
 guess[strlen(guess)] =next_letter; // add the next letter to the guess array
 guess[strlen(guess)] = '\0'; // terminate the guess array
 next_letter_index++; // increment the index of the next letter to be revealed

 printf("The next letter is: %c\n", next_letter);
  if (correct_guess) {
 printf("Correct! The word so far is: %s\n", guess);
 }
 }
  else if (strlen(guess) == length)
    goto end;
  else{
 incorrect_guesses++;
 printf("Incorrect guess. You have %d guesses left.\n", 5 - incorrect_guesses);
 }

 end:
     if (strcmp(guess, word) == 0) { // check if the guess matches the word
 printf("Congratulations, you guessed the word!\n");
 break;}
 }

 return 0;
}*/

int level4(char * easy, int size) {
 char* word = choose_word(easy,size);// set the word to be guessed
 int length = strlen(word);
 char guess[100] = {'_', '\0'}; // initialize guess array with underscore
 int incorrect_guesses = 0;
 int next_letter_index = 0; // index of the next letter to be revealed

 char alpha1 = word[0];
 char alpha2= word[strlen(word)-1];

 printf("\nGuess a word (length %d) begins with %c and ends with %c: %s\n", length,alpha1,alpha2,guess );

 while (incorrect_guesses < 5)
{ // limit to 5 incorrect guesses

 int correct_guess = 0;

 if (strlen(guess) < length)
{
 char next_letter = word[next_letter_index]; //generate the next letter
 guess[next_letter_index] =next_letter; // add the next letter to the guess array
 guess[next_letter_index+1] = '\0'; // terminate the guess array
 next_letter_index = next_letter_index+2; // increment the index of the next letter to be revealed
/*if(guess[next_letter_index]= word[0])
 printf("The first letter is: %c\n", next_letter);
 else*/
 printf("The next letter is: %c\n", next_letter);
 printf("The word so far is: %s\n", guess);
  if (strlen(guess)==length){
    correct_guess = 1;
    goto end;
 }

  char input;
   again:
 printf("Enter a letter: ");
 scanf(" %c", &input); // read in a single character


 for (int i = 1; i < length; i+=2)
{
 if (word[i] == input) {
 guess[i] = input; // update the guess array with the correct guess
  //guess[next_letter_index] =next_letter; // add the next letter to the guess array
 guess[strlen(guess)] = '\0';
 correct_guess = 1;
 }
 }

 }  if (correct_guess) {
 printf("Correct! The word so far is: %s\n", guess);
 }
  else if (strlen(guess) == length)
    goto end;
  else{
 incorrect_guesses++;
 printf("Incorrect guess. You have %d guesses left.\n", 5 - incorrect_guesses);
 if (incorrect_guesses<5)
 goto again;
 }

 end:
     if (strcmp(guess, word) == 0) { // check if the guess matches the word
 printf("Congratulations, you guessed the word!\n");
 return 1;
 break;}
 }
 if(incorrect_guesses>=5)
 printf("\nThe correct word is %s\n",word);
 return 0;
}


//Humphrey are you satisfied? :(




