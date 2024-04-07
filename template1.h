
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

class Education {
private:
    vector<string> details;

public:
    void addDetail(const string& degree, const string& university, const string& gpa, const string& year);
    void saveToFile(ofstream& outFile) const;
};

class WorkExperience {
private:
    vector<string> details;

public:
    void addDetail(const string& role, const string& company, const string& timeline, const string& description);
    void saveToFile(ofstream& outFile) const;   
};

class Projects {
private:
    vector<string> details;

public:
    void addDetail(const string& projectName, const string& techStack, const string& timeline, const string& description);
    void saveToFile(ofstream& outFile) const;   
};

class PositionsOfResponsibility {
private:
    vector<string> details;

public:
    void addDetail(const string& position, const string& clubName, const string& year, const string& description);
    void saveToFile(ofstream& outFile) const; 
};

class Achievements {
private:
    vector<string> details;

public:
    void addDetail(const string& achievement);
    void saveToFile(ofstream& outFile) const ;
};

class TechnicalSkills {
private:
    vector<string> skills;

public:
    void addSkill(const string& skill);
    void saveToFile(ofstream& outFile) const;
};

class SoftSkills {
private:
    vector<string> skills;

public:
    void addSkill(const string& skill);
    void saveToFile(ofstream& outFile) const;
};

class Resume1 {
private:
    string name;
    string email;
    string phoneNumber;
    string linkedIn;
    string gitHub;
    Education education;
    WorkExperience workExperience;
    Projects projects;
    PositionsOfResponsibility positionsOfResponsibility;
    Achievements achievements;
    TechnicalSkills technicalSkills;
    SoftSkills softSkills;

public:
    void setName(const string& n);
    void setEmail(const string& e);
    void setPhoneNumber(const string& pn);
    void setLinkedIn(const string& li);
    void setGitHub(const string& gh);
    void saveToFile(const string& filename);
    
    void addEducationDetail(const string& degree, const string& university, const string& gpa, const string& year);
    void addWorkExperienceDetail(const string& role, const string& company, const string& timeline, const string& description);
    void addProjectDetail(const string& projectName, const string& techStack, const string& timeline, const string& description);
    void addPositionOfResponsibility(const string& position, const string& clubName, const string& year, const string& description);
    void addAchievement(const string& achievement);
    void addTechnicalSkill(const string& skill);
    void addSoftSkill(const string& skill);
};
 
