#include<stdio.h>
#include<person.h>

void personFunction(struct personData data){
printf("person Name: %s\n",data.person_name);
printf("person Id: %d\n",data.person_id);
printf("person Age: %d\n",data.person_age);
printf("person Adderss: \n");
printf("street: %s\n",data.personAdderss.street);
printf("state: %s\n",data.personAdderss.state);
printf("city: %s\n",data.personAdderss.city);
}
