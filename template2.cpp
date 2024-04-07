#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template2.h"

using namespace std;

void Education :: addDetail(const string& degree, const string& university, const string& gpa, const string& year) {
    string detail = "Degree: " + degree + "\nUniversity: " + university + "\nGPA: " + gpa + "\nYear of Graduation: " + year;
    details.push_back(detail);
}

void Education :: saveToFile(ofstream& outFile) const {
    outFile << "                                                                                   EDUCATION" << endl;
    for (size_t i = 0; i < details.size(); ++i) {
        outFile << "• " << details[i] << endl;
    }
    outFile << "\n____________________________________________________________________________________________________________________________________________________________________________________________\n\n";
}

void PositionsOfResponsibility :: addDetail(const string& position, const string& clubName, const string& year, const string& description) {
    string detail = "Position of Responsibility: " + position + "\nClub Name: " + clubName + "\nYear: " + year + "\nDescription: " + description;
    details.push_back(detail);
}

void PositionsOfResponsibility :: saveToFile(ofstream& outFile) const {
    outFile << "                                                                                  POSITION OF RESPONSIBILITY" << endl;
    for (size_t i = 0; i < details.size(); ++i) {
        outFile << "• " << details[i] << endl;
    }
    outFile << "\n____________________________________________________________________________________________________________________________________________________________________________________________\n\n";
}

void Achievements :: addDetail(const string& achievement) {
    details.push_back(achievement);
}

void Achievements :: saveToFile(ofstream& outFile) const {
    outFile << "                                                                                  ACHIEVEMENTS" << endl;
    for (size_t i = 0; i < details.size(); ++i) {
        outFile << "• " << details[i] << endl;
    }
    outFile << "\n____________________________________________________________________________________________________________________________________________________________________________________________\n\n";
}

void CommunityInvolvement :: addDetail(const string& activity, const string& organization, const string& year, const string& description) {
    string detail = "Activity: " + activity + "\nOrganization: " + organization + "\nYear: " + year + "\nDescription: " + description;
    details.push_back(detail);
}

void CommunityInvolvement :: saveToFile(ofstream& outFile) const {
    outFile << "                                                                                  COMMUNITY INVOLVEMENT" << endl;
    for (size_t i = 0; i < details.size(); ++i) {
        outFile << "• " << details[i] << endl;
    }
    outFile << "\n____________________________________________________________________________________________________________________________________________________________________________________________\n\n";
}

void Resume2 :: setName(const string& n) { name = n; }
void Resume2 :: setEmail(const string& e) { email = e; }
void Resume2 :: setPhoneNumber(const string& pn) { phoneNumber = pn; }
void Resume2 :: setLinkedIn(const string& li) { linkedIn = li; }
void Resume2 :: setGitHub(const string& gh) { gitHub = gh; }

void Resume2 :: saveToFile(const string& filename) {
    ofstream outFile(filename.c_str());
    if (outFile.is_open()) {
        outFile << "__________________________________________________________________________________________________________________________________________________________________________________________\n\n";
        outFile << "                                                                                 " << name << endl;
        outFile << "_________________________________________________________________________________________________________________________________________________________________________________________\n\n";

        outFile << "    Email: " << email ;
        outFile << "\tPhone Number: " << phoneNumber ;
        outFile << "\tLinkedIn: " << linkedIn ;
        outFile << "\tGitHub: " << gitHub << endl;
        outFile << "__________________________________________________________________________________________________________________________________________________________________________________________\n\n";

        education.saveToFile(outFile);
        positionsOfResponsibility.saveToFile(outFile);
        achievements.saveToFile(outFile);
        communityInvolvement.saveToFile(outFile);

        outFile.close();
        cout << "Resume saved to " << filename << endl;
    } else {
        cout << "Unable to open file " << filename << " for writing." << endl;
    }
}

void Resume2 :: addEducationDetail(const string& degree, const string& university, const string& gpa, const string& year) {
    education.addDetail(degree, university, gpa, year);
}

void Resume2 :: addPositionOfResponsibility(const string& position, const string& clubName, const string& year, const string& description) {
    positionsOfResponsibility.addDetail(position, clubName, year, description);
}

void Resume2 :: addAchievement(const string& achievement) {
    achievements.addDetail(achievement);
}

void Resume2 :: addCommunityInvolvementDetail(const string& activity, const string& organization, const string& year, const string& description) {
    communityInvolvement.addDetail(activity, organization, year, description);
}

