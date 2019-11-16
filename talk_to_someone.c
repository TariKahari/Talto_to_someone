
  #include<stdio.h>
  #include<string.h>
  void conv(char name[]);
  grade[10];
void main()
{
char responce[10], name[20],big[10];
int b,c,j,k;
char Ola[50];
char reply[3]={'y','e','s'},why[10]={'b','B','I','c','a','i','m'};
printf("Are you alive.\n");
scanf("%s",&big);

if(big[0]==reply[0])
{
printf("kkkk.Of course you are. I knew you were.\n");
printf ("\nOk Hie. My name's Robonezer. Whats yours.\n\n");
scanf("%s",&name);
printf("Is everything Ok %s\n",name);
scanf("%s",&Ola);
if (Ola[0]==reply[0])
{
printf("haaaa. LOVELY!!\n.\n I know you know life's a blessing hey.\n\n\n\n");
conv(name);
}
else
{
    printf("\nWhy is it so.\n");
    scanf("%s\n",&Ola);
    if ((Ola[0]==why[0])||(Ola[0]==why[1]))
            {
                printf("\nTHAT'S NOT A GOOD ENOUGH REASON\n\nThe fact that you are alive today is a good enough reason to be cheerful.\n");
                scanf("%s",&grade);
                conv(name);
            }
}}}

void conv(char name[10])
{
    char Ola[10];
char    responce[10];
int j,k;
if ((name[0]=='o')&&(name[1]=='d')&&(name[2]=='i')&&(name[3]=='l'))
{
    printf("Hie Ola. How are you doing.\n");
    scanf("%s",&Ola);
    if ((Ola[0]=='f')||(Ola[0]=='F')||(Ola[0]=='G')||(Ola[0]=='g')||(Ola[0]=='c')||(Ola[0]=='C')||(Ola[0]=='o'))
    {
        printf("Thats Great Mr Jinya\n!\n\n");
        Ola[0]=0;
       printf("Type your one-word message to me.\n");
       scanf("%s",&Ola);
    }
}
printf("\nOh %s I only understand single word answers but I'm smart though!Are you from Harare.\n\n",name);
scanf("%s",&responce[0]);
if (responce[0]==121)
{
    printf("Hello Hararian. So how old were you last year.\n");
scanf("%d",&responce[8]);
j=responce[8]*365+60;
k=2015-responce[8];
printf ("Woo. You are very old .About %d days old(just an estimation kkk)! \n\n.How was your day?\n\n",j);
scanf("%s",&responce[1]);
}
else
{
    printf("\tHello. How was your day?\n");
    scanf("%s",&responce[2]);
    if (responce[2]==103||responce[2]==102||responce[2]==97||responce[2]==111||responce[2]==79||responce[2]==99)
    {
    printf("We thank God for that\n. \t \n\nNice talking to you.\n\n");
    }
}

if (responce[1]==103||responce[1]==102||responce[1]==97||responce[1]==99||responce==79 ||responce[1]==69||responce[1]==101||responce[1]==70)
{
    printf("We thank God for that. So have you eaten yet\n");
    scanf("%s",&responce[3]);
    if (responce[3]==121||responce[3]==89)
    {
        printf("Did you leave some for me.\n");
        scanf("%s",&responce[5]);
        if (responce[5]==121||responce[5]==89||responce[5]==101||responce[5]==69)
        {
            name[20]=0;
            printf("Liar! I got you. You didn't!!\n\nOk. tell me your name again %d kid. \n",k);
            printf("Dont lie again\n");
            scanf("%s",&grade);
            printf("Anyway. Nice talking to you %s. Have a blessed day.\n",grade);
        }
        else
        {
        printf("You better next time I am so hungry.Whats your name\n");
        scanf("%s",&name);
        printf("Anyway. Nice talking to you . Have a blessed day.GOOD BYE %s",name);
        }
    }
    else
    {
    printf ("Well you better look for something to have. Would you like some ice cream?\n");
    scanf("%s",&responce[6]);
    }
    if (responce[6]==121||responce[6]==89||responce[6]==99||responce[6]==115||responce[6]==119||responce[6]==71||responce[6]==79)
    {
        printf("I wish I could help but my funds are limited. Are you disappointed?\n");
        scanf("%s",&responce[10]);
        if (responce[10]==121||responce[10]==89||responce[10]==101||responce[10]==69||responce[10]==79||responce[10]==119)
        {
            printf("Come on! I am only a machine. A broke one for that matter.\n\n\n Good bye %d kid.I have to go.\n\n it was nice charting with you",k);
            }
    }
    else
        {
            printf("But. If I may ask, do you like sadza?\n\n");
    scanf ("%s",&responce[7]);
        }
    if (responce[7]==128||responce[7]==121||responce[7]==107||responce[7]==89||responce[7]==99)
{
    printf ("Haaa.kkkkkkk.\n I like you choice %s.It's traditional.\n\n Take care %d kid.\n Good bye!\n\n",name,k);
}
else
{
    printf("\nTashaya kuti tokuitirei %s.\n\n Anyway take care %d kid.\n \nGood bye!\n\n\n",name,k );
}
    }
else
{
    printf ("Dont worry.\n Don't assume that God's dismissed you from his mind,\nDon't assume that God's forgotten to be kind. \nFor no matter what you do, his love still follows you,\nDon't think that you have left him far behind.\n\n");
}

printf("Thank you for your time. \nPatient people like you will make Robonezer bigger than ever. Please make your suggestions on how best we can make Robonezer better in the text-pad adjuscent..\n\n\n\nPlease press you favourate key then Enter to say bye to Robonezer.\n");
scanf("%s",name);
printf("Bye!\n");
printf("\n\t\t\tKAHARI Technologies(c)\nAll rights reserved.\n\n\n\n");
}
