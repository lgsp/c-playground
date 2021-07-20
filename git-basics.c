#include <stdio.h>
#include <stdlib.h>

void installGit();
void sshGitHub();
int lenString(char *string);
void title(char *string, int stringLen);
void areYouReady(char *thing, int order);

int main()
{

  printf("Do you know how to install Git?\n");
  printf("0) No\t1) Yes\nYour choice: ");
  int choice = 0;
  scanf("%d", &choice);
  if(choice == 0) installGit();
  choice = 0;

  printf("Do you know how to use SSH to connect to Git Hub?\n");
  printf("0) No\t1) Yes\nYour choice: ");
  scanf("%d", &choice);
  if(choice == 0) sshGitHub();

  return 0;
}


int lenString(char *string)
{
  int i = 0;
  while(*(string+i) != '\0') i++;
  return i;
}

void title(char *string, int stringLen)
{
  printf("\n");
  for(int i = 0; i < stringLen+4; i++) printf("=");
  printf("\n");
  printf("= %s =\n", string);
  for(int i = 0; i < stringLen+4; i++) printf("=");
  printf("\n\n");
}

void areYouReady(char *thing, int order)
{
  char *ayr = "Are you ready for ";
  char *msg = malloc(sizeof(ayr) + 1 + sizeof(thing) + 1 + sizeof(order));
  int lenAyr = lenString(ayr);
  int lenThing = lenString(thing);
  int i = 0;
  int j = 0;
  int k = 0;

  while(*(ayr+j) != '\0')
  {
    i = j;
    *(msg+i) = *(ayr+j);
    j++;
  }
  i = j;

  while(*(thing+k) != '\0')
  {
    *(msg+i) = *(thing+k);
    k++;
    i++;
  }

  for(int cpt = 0; cpt < lenAyr + lenThing + 4; cpt++) printf("-");
  printf("\n");
  printf("%s %d?\n", msg, order);
  for(int cpt = 0; cpt < lenAyr + lenThing + 4; cpt++) printf("-");
  printf("\n");
  printf("0) No\t1) Yes\nYour choice: ");
}

void installGit()
{
  char *git = "How to install Git?";
  int lenGit = lenString(git);
  title(git, lenGit);
  int step = 0;

  areYouReady("step", 1);
  scanf("%d", &step);
  if (step == 1) printf("Step 1: visit https://git-scm.com/downloads\n");
  step = 0;
  printf("\n-----------\n\n");

  areYouReady("step", 2);
  scanf("%d", &step);
  if (step == 1) printf("Step 2: open your terminal\n");
  step = 0;
  printf("\n-----------\n\n");

  areYouReady("step", 3);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 3: type 'git clone https://github.com/git/git'");
    printf(" and hit 'Enter'\n");
  }
  step = 0;
  printf("\n-----------\n\n");

  areYouReady("step", 4);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 4: type 'git --version'");
    printf(" and hit 'Enter'\n");
  }
  step = 0;
  printf("\n-----------\n\n");

  char *congrat = "CONGRATUALTIONS: YOU HAVE INSTALLED THE LATEST GIT VERSION!";
  int lenCongrat = lenString(congrat);
  title(congrat, lenCongrat);
  
}

void sshGitHub()
{
  char *ssh = "How to use SSH to connect to GitHub?";
  int lenSSH = lenString(ssh);
  title(ssh, lenSSH);

  int step = 0;
  areYouReady("step", 1);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 1: visit https://github.com and sign up\n");
  }
  step = 0;
  printf("\n-----------\n\n");

  areYouReady("step", 2);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 2: open your terminal and go to your home directory\n");
    printf("Which means, type 'cd ~'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 3);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 3: confirm that you are in your home directory\n");
    printf("Which means, type 'pwd' and you should get\n");
    printf("\t'/Users/your_name'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 4);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 4: create a '.ssh' directory\n");
    printf("Which means, type 'mkdir .ssh'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 5);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 5: move into your new '.ssh' directory\n");
    printf("Which means, type 'cd .ssh'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 6);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 6: Create your SSH key pair\n");
    printf("Which means, type:\n");
    printf("'ssh-keygen -t rsa -C \"your_email@your_domain.com\"'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 7);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 7: You should see something like:\n");
    printf("Generating public/private rsa key pair.\n");
    printf("# Enter file in which to save the key (/Users/you/.ssh/id_rsa):\n");
    printf("The default location to save the key pair is correct,\n");
    printf("so hit 'Enter' to complete the creation of your SSH keys.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 8);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 8: You'll be asked for a passphrase.\n");
    printf("As you type your passphrase, you won't see any characters.\n");
    printf("Be sure to save your passphrase.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 9);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 9: Add your key to the SSH agent so your computer\n");
    printf("will automaticaly use it whenever you are communicating\n");
    printf("via SSH.\n");
    printf("Which means, type: 'ssh-add -K ~/.ssh/id_rsa'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 10);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 10: You'll need to get the public key from the command\n");
    printf("line so you can paste it into GitHub.\n");
    printf("Which means, type: 'pbcopy < ~/.ssh/id_rsa.pub'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 11);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 11: You won't see anything but your SSH key is copied.\n");
    printf("Go to GitHub, click on your profile and click 'Settings'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 12);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 12: Click 'New SSH Key'.\n");
    printf("Name your key which is connected to this specific computer.\n");
    printf("In the Key section, paste the key you copied in step 11.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 13);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 13: Go back to the terminal\n");
    printf("and type: 'ssh -T git@github.com'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  areYouReady("step", 14);
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Hi your_name! You've successfully authenticated,\n");
    printf("but GitHub does not provide shell access.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
}
