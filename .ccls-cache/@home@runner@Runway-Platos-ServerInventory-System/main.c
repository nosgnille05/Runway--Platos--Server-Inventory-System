#include <stdio.h>
#include <string.h>
#include <time.h>

int main(void) {
  /*Notes:
    -Design, Organize, Tech-Stack, API, Implementation
    -Design: What and How?
    -Organize: In what way?
    -Tech-Stack: Flutter/Postgres
    -API: Build it
    -Implementation: Web Application
    */
  char admin_fname[100], admin_lname[100], admin_username[100];
  char employee_fname[100], employee_lname[100], employee_username[100];
  char information_correct[100];
  char Correct[100] = "Y", correct[100] = "y";
  int all_correct = 0;
  char buy_sell[100];
  char Buy[100] = "B", buy[100] = "b";
  char seller_fname[100], seller_lname[100], seller_phone[100];
  char seller_information_correct[100];
  char Seller_correct[100] = "Y", seller_correct[100] = "y";
  char admin_or_customer[100];
  char Admin[100] = "A", admin[100] = "a";

  // Admin or Customer
  printf("Welcome to Runway/Platos! Admin or Customer? A or C\n");
  scanf("%s", admin_or_customer);
  if (strcmp(Admin, admin_or_customer) == 0 ||
      strcmp(admin, admin_or_customer) == 0) {
    // Get Information
    printf("\nPlease enter the following "
           "information:\n---------------------------------------\n");
    while (all_correct == 0) {
      // Get Admin Name
      printf("\nAdministrators First and Last name.\n");
      scanf("%s", admin_fname);
      scanf("%s", admin_lname);
      // Set Admin Username
      printf("\nSet the Administrators Username.\n");
      scanf("%s", admin_username);
      // Get Employee Name
      printf("\nEmployees First and Last name.\n");
      scanf("%s", employee_fname);
      scanf("%s", employee_lname);
      // Set Employee Userbame
      printf("\nSet the Employees Username.\n");
      scanf("%s", employee_username);
      // Generate User Information Output Table
      printf("\nThank you! Please wait...\n\n");
      printf("\n              You "
             "Entered:\n------------------------------------------\n");
      printf("       Admin Name: %s %s\n", admin_fname, admin_lname);
      printf("   Admin Username: %s\n\n", admin_username);
      printf("    Employee Name: %s %s\n", employee_fname, employee_lname);
      printf("Employee Username: %s\n", employee_username);
      // Confirm Information Correctness
      printf("\nDoes this information look correct? Y or N\n");
      scanf("%s", information_correct);
      if (strcmp(Correct, information_correct) == 0 ||
          strcmp(correct, information_correct) == 0)
        printf("\nPerfect! You're all set!\n");
      else
        printf("\nDon't worry! We can fix it now!\n");
    }
  } else {
    printf("\nWelcome to (Runway/Platos)! Would you like to buy or sell today? "
           "B or S\n");
    scanf("%s", buy_sell);
    if (strcmp(Buy, buy_sell) == 0 || strcmp(buy, buy_sell) == 0)
      printf("\nAwesome! Take a look around!\n");
    else {
      printf("\nGreat! An associate will be right with you!\n");
      printf("\nPlease enter your First and Last name.\n");
      scanf("%s", seller_fname);
      scanf("%s", seller_lname);
      printf("\nPlease enter your phone number.\n**Only uses to contact you "
             "when we're done**\n");
      scanf("%s", seller_phone);
      printf("\nDoes this information look correct? Y or N\n");
      printf("\nYour First and Last: %s %s\n", seller_fname, seller_lname);
      printf("  Your Phone Number: %s\n", seller_phone);
      scanf("%s", seller_information_correct);
      if (strcmp(Seller_correct, seller_information_correct) == 0 ||
          strcmp(seller_correct, seller_information_correct) == 0) {
        printf("\nPerfect! Thank you!\n");
      }
    }
  }





  return 0;
}
