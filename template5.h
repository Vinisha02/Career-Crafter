#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Resume5 {
	
private:
    string name;
    string email;
    string phoneNumber;
    string linkedIn;
    string gitHub;
    vector<string> education;
    vector<string> academicAchievements;
    vector<string> extracurricularActivities;
    vector<string> workExperience;
    vector<string> skills;
    vector<string> interests;
    vector<string> languages;

public:
    void setName(const string& n) ;
    void setEmail(const string& e) ;
    void setPhoneNumber(const string& pn) ;
    void setLinkedIn(const string& li) ;
    void setGitHub(const string& gh) ;


    void addEducation(const string& detail);
    void addAcademicAchievement(const string& achievement);

    void addExtracurricularActivity(const string& activity);

    void addWorkExperience(const string& experience) ;
    void addSkill(const string& skill);
    void addInterest(const string& interest) ;
    
    void addLanguage(const string& language);

    void saveToFile(const string& filename) const;
    
};

