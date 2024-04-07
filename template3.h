#ifndef TEMPLATE3_H
#define TEMPLATE3_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Education {
private:
    vector<string> details;

public:
    void addDetail(const string& degree, const string& university, const string& gpa, const string& year) ;

    void saveToFile(ofstream& outFile) const ;
};

class WorkExperience {
private:
    vector<string> details;

public:
    void addDetail(const string& role, const string& company, const string& timeline, const string& description) ;

    void saveToFile(ofstream& outFile) const ;
};

class Projects {
private:
    vector<string> details;

public:
    void addDetail(const string& projectName, const string& techStack, const string& timeline, const string& description) ;
    void saveToFile(ofstream& outFile) const ;
};

class ResearchExperience {
private:
    vector<string> details;

public:
    void addDetail(const string& title, const string& organization, const string& timeline, const string& description) ;

    void saveToFile(ofstream& outFile) const ;
};

class Publications {
private:
    vector<string> details;

public:
    void addDetail(const string& title, const string& journal, const string& year) ;
    void saveToFile(ofstream& outFile) const ;
};

class Presentations {
private:
    vector<string> details;

public:
    void addDetail(const string& title, const string& conference, const string& year) ;

    void saveToFile(ofstream& outFile) const ;
};

class Achievements {
private:
    vector<string> details;

public:
    void addDetail(const string& achievement) ;

    void saveToFile(ofstream& outFile) const ;
};

class Resume3 {
private:
    string name;
    string email;
    string phoneNumber;
    string linkedIn;
    //string gitHub;
    Education education;
    WorkExperience workExperience;
    Projects projects;
    ResearchExperience researchExperience;
    Publications publications;
    Presentations presentations;
    Achievements achievements;

public:
    void setName(const string& n) ;
   // void setEmail(const string& e) ;
    void setPhoneNumber(const string& pn) ;
    void setLinkedIn(const string& li) ;
    void setGitHub(const string& gh) ;

    void addEducationDetail(const string& degree, const string& university, const string& gpa, const string& year) ;

    void addWorkExperienceDetail(const string& role, const string& company, const string& timeline, const string& description) ;
    

    void addProjectDetail(const string& projectName, const string& techStack, const string& timeline, const string& description);

    void addResearchExperienceDetail(const string& title, const string& organization, const string& timeline, const string& description) ;

    void addPublicationDetail(const string& title, const string& journal, const string& year) ;
    

    void addPresentationDetail(const string& title, const string& conference, const string& year) ;

    void addAchievement(const string& achievement) ;

    void saveToFile(const string& filename) ;
};
#endif 
