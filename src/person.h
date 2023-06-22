#ifndef PESON_H
#define PERSON_H

struct person_address{
char *street;
char *state;
char *city;
}

struct personDate{
char *person_name;
int person_id;
int person_age;
struct person_adderss personAdderss;
};

void personFunction(struct personDate date);

#endif 
