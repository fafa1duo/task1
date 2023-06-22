#include"person.h"

int main(){
struct personDate person;
person.person_name="John";
person.person_id="123123";
person.person_age="25";
person.personAdderss.street="123 main st";
person.personAdderss.state="China";
person.personAdderss.city="Beijing";

personFunction(person);

return 0;
}
