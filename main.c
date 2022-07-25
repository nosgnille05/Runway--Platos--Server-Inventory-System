#include <stdio.h>
#include <time.h>
#include <string.h>

int main(void) {
  //Inventory Temp Variables
  int shoes = 0;
  int shirts = 0;
  int pants = 0;
  int total = shoes + shirts + pants;
  printf("Total %d\n", total);
  /*Notes:
    -API
    -Front End
    -Admin
    -Employee
  */
  char admin_fname[100];
  char admin_lname[100];
  char admin_username[100];
  char employee_fname[100];
  char employee_lname[100];
  char employee_username[100];
  char information_correct[100];
  char correct[100] = "Y";
  int all_correct = 0;

  //Get Information
  printf("\nPlease enter the following information:\n---------------------------------------\n");

  while(all_correct == 0){
  //Get Admin Name
  printf("\nAdministrators First and Last name.\n");
  scanf("%s", admin_fname);
  scanf("%s", admin_lname);

  //Set Admin Username
  printf("\nSet the Administrators Username.\n");
  scanf("%s", admin_username);
  
  //Get Employee Name
  printf("\nEmployees First and Last name.\n");
  scanf("%s", employee_fname);
  scanf("%s", employee_lname);

  //Set Employee Userbame
  printf("\nSet the Employees Username.\n");
  scanf("%s", employee_username);

  //Generate User Information Output Table
  printf("\nThank you! Please wait...\n\n");
  printf("\n              You Entered:\n------------------------------------------\n");
  printf("       Admin Name: %s %s\n", admin_fname, admin_lname);
  printf("   Admin Username: %s\n\n", admin_username);
  printf("    Employee Name: %s %s\n", employee_fname, employee_lname);
  printf("Employee Username: %s\n", employee_username);

  //Confirm Information Correctness
  printf("\nDoes this information look correct? Y or N\n");
  scanf("%s", information_correct);

  if((strcmp(correct, information_correct)) == 0)
  {
    printf("\nPerfect! Lets get started!\n");
    all_correct = 1;
  }
  else
    printf("\nDon't worry! We can fix it now!\n");
  }

  return 0; 
}



