#ifndef TEMPLATE2_H
#define TEMPLATE2_H

#include <string>
#include <vector>

using namespace std;

class Education {
private:
    vector<string> details;

public:
    void addDetail(const string& degree, const string& university, const string& gpa, const string& year);
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
    void saveToFile(ofstream& outFile) const;
};

class CommunityInvolvement {
private:
    vector<string> details;

public:
    void addDetail(const string& activity, const string& organization, const string& year, const string& description);
    void saveToFile(ofstream& outFile) const;
};

class Resume2 {
private:
    string name;
    string email;
    string phoneNumber;
    string linkedIn;
    string gitHub;
    Education education;
    PositionsOfResponsibility positionsOfResponsibility;
    Achievements achievements;
    CommunityInvolvement communityInvolvement;  // Add this line

public:
    void setName(const string& n);
    void setEmail(const string& e);
    void setPhoneNumber(const string& pn);
    void setLinkedIn(const string& li);
    void setGitHub(const string& gh);

    void saveToFile(const string& filename);
    
    void addEducationDetail(const string& degree, const string& university, const string& gpa, const string& year);
    void addPositionOfResponsibility(const string& position, const string& clubName, const string& year, const string& description);
    void addAchievement(const string& achievement);
    void addCommunityInvolvementDetail(const string& activity, const string& organization, const string& year, const string& description);  // Add this line
};

#endif // TEMPLATE2_H


