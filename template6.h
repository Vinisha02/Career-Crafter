#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Resume6 {
private:
    string name;
    string phoneNumber;
    string email;
    string linkedIn;
    string gitHub;
    vector<string> journalismExperience;
    vector<string> prCampaigns;
    vector<string> contentCreation;
    vector<string> editingSkills;
    vector<string> multimediaProduction;
    vector<string> generalSkills;

public:
    void setName(const string& n);
    void setEmail(const string& e) ;
    void setPhoneNumber(const string& pn) ;
    void setLinkedIn(const string& li) ;
    void setGitHub(const string& gh) ;

    void addJournalismExperience(const string& experience) ;

    void addPRCampaign(const string& campaign) ;

    void addContentCreation(const string& creation) ;

    void addEditingSkill(const string& skill);

    void addMultimediaProduction(const string& production) ;

    void addGeneralSkill(const string& skill);

    void saveToFile(const string& filename) const;
};

