#include <stdio.h>


void installGit();
void sshGitHub();

int main()
{
  printf("Do you know how to install Git?\n0) No\n1) Yes\nYour choice: ");
  int choice = 0;
  scanf("%d", &choice);
  if(choice == 0) installGit();
  choice = 0;

  printf("Do you know how to use SSH to connect to Git Hub?\n");
  printf("0) No\n1) Yes\nYour choice: ");
  scanf("%d", &choice);
  if(choice == 0) sshGitHub();

  
  
  return 0;
}


void installGit()
{
  printf("How to install Git?\n");
  int step = 0;
  printf("Are you ready for step 1?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1) printf("Step 1: visit https://git-scm.com/downloads\n");
  step = 0;

  printf("Are you ready for step 2?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1) printf("Step 2: open your terminal\n");
  step = 0;

  printf("Are you ready for step 3?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 3: type 'git clone https://github.com/git/git'");
    printf(" and hit 'Enter'\n");
  }
  step = 0;

  printf("Are you ready for step 4?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 4: type 'git --version'");
    printf(" and hit 'Enter'\n");
  }
  printf("CONGRATUALTIONS: YOU HAVE INSTALLED THE LATEST GIT VERSION!\n");
}

void sshGitHub()
{
  printf("How to use SSH to connect to GitHub?\n");
  int step = 0;
  printf("Are you ready for step 1?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 1: visit https://github.com and sign up\n");
  }
  step = 0;
  printf("\n-----------\n\n");

  printf("Are you ready for step 2?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 2: open your terminal and go to your home directory\n");
    printf("Which means, type 'cd ~'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 3?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 3: confirm that you are in your home directory\n");
    printf("Which means, type 'pwd' and you should get\n");
    printf("\t'/Users/your_name'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 4?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 4: create a '.ssh' directory\n");
    printf("Which means, type 'mkdir .ssh'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 5?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 5: move into your new '.ssh' directory\n");
    printf("Which means, type 'cd .ssh'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 6?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 6: Create your SSH key pair\n");
    printf("Which means, type:\n");
    printf("'ssh-keygen -t rsa -C \"your_email@your_domain.com\"'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 7?\n0) No\n1) Yes\nYour choice: ");
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
  
  printf("Are you ready for step 8?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 8: You'll be asked for a passphrase.\n");
    printf("As you type your passphrase, you won't see any characters.\n");
    printf("Be sure to save your passphrase.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 9?\n0) No\n1) Yes\nYour choice: ");
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
  
  printf("Are you ready for step 10?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 10: You'll need to get the public key from the command\n");
    printf("line so you can paste it into GitHub.\n");
    printf("Which means, type: 'pbcopy < ~/.ssh/id_rsa.pub'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 11?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 11: You won't see anything but your SSH key is copied.\n");
    printf("Go to GitHub, click on your profile and click 'Settings'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 12?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 12: Click 'New SSH Key'.\n");
    printf("Name your key which is connected to this specific computer.\n");
    printf("In the Key section, paste the key you copied in step 11.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 13?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 13: Go back to the terminal\n");
    printf("and type: 'ssh -T git@github.com'\n");
  }
  step = 0;
  printf("\n-----------\n\n");
  
  printf("Are you ready for step 14?\n0) No\n1) Yes\nYour choice: ");
  scanf("%d", &step);
  if (step == 1)
  {
    printf("Step 14: You should see something like this:\n");
    printf("Hi your_name! You've successfully authenticated,\n");
    printf("but GitHub does not provide shell access.\n");
  }
  step = 0;
  printf("\n-----------\n\n");
}
