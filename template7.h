#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class CreativeProfile {
private:
    string name;
    string phoneNumber;
    string email;
    string objective;
    vector<string> productionExperience;
    vector<string> memorableProjects;
    vector<string> keyTalents;
    vector<string> notableProjects;
    vector<string> qualifications;
    vector<string> awardsImpact;
    vector<string> influentialWork;
    vector<string> technicalProficiency;
    vector<string> standoutAbilities;
    vector<string> liveVsScreen;
    vector<string> creativeInnovation;
    vector<string> leadershipExperience;
    vector<string> musicalInfluence;
    vector<string> storytellingApproach;

public:
    void setName(const string& n) ;
    void setPhoneNumber(const string& pn) ;
    void setEmail(const string& e) ;
    void setObjective(const string& obj);

    void addProductionExperience(const string& experience) ;

    void addMemorableProject(const string& project) ;

    void addKeyTalent(const string& talent) ;

    void addNotableProject(const string& project);

    void addQualification(const string& qualification);

    void addAwardsImpact(const string& impact);

    void addInfluentialWork(const string& work) ;
    
    void addTechnicalProficiency(const string& proficiency);

    void addStandoutAbilities(const string& abilities) ;

    void addLiveVsScreen(const string& experience) ;

    void addCreativeInnovation(const string& innovation);

    void addLeadershipExperience(const string& experience) ;

    void addMusicalInfluence(const string& influence) ;

    void addStorytellingApproach(const string& approach);

    void saveToFile(const string& filename) const ;
};

