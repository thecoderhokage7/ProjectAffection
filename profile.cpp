#include "profile.hpp"
Profile::Profile(std::string new_name, int new_age, std::string new_city, std::string new_country, std::string new_pronouns)
    : name(new_name), age(new_age), city(new_city), country(new_country), pronouns(new_pronouns) {}


void profile::add_hobbies(){
  hobbies.push_back(new_hobby);
}


std::string  Profile::view_profile(){
  std::string bio = "Name: " + name;
  bio += "\nAge: " + std::to_string(age);
  bio += "\nPronouns: " + pronouns;
  sam.add_hobby("listening to audiobooks and podcasts");
  return bio;

 for(std::string hobby : hobbies){
    hobby_string += " _ " + hobby + "\n";
  }
  return bio + hobby_string;
}
