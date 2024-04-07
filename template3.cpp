#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template3.h"
using namespace std;


    void Education :: addDetail(const string& degree, const string& university, const string& gpa, const string& year) {
        string detail = "Degree: " + degree + "\nUniversity: " + university + "\nGPA: " + gpa + "\nYear of Graduation: " + year;
        details.push_back(detail);
    }

    void Education :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                        EDUCATION" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void WorkExperience :: addDetail(const string& role, const string& company, const string& timeline, const string& description) {
        string detail = "Role: " + role + "\nCompany: " + company + "\nTimeline: " + timeline + "\nDescription: " + description;
        details.push_back(detail);
    }

    void WorkExperience :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                         WORK EXPERIENCE" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n___________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void Projects :: addDetail(const string& projectName, const string& techStack, const string& timeline, const string& description) {
        string detail = "Project Name: " + projectName + "\nTech Stack: " + techStack + "\nTimeline: " + timeline + "\nDescription: " + description;
        details.push_back(detail);
    }

    void Projects :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                          PROJECTS" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void ResearchExperience :: addDetail(const string& title, const string& organization, const string& timeline, const string& description) {
        string detail = "Title: " + title + "\nOrganization: " + organization + "\nTimeline: " + timeline + "\nDescription: " + description;
        details.push_back(detail);
    }

    void ResearchExperience :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                             RESEARCH EXPERIENCE" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n_________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }


    void Publications :: addDetail(const string& title, const string& journal, const string& year) {
        string detail = "Title: " + title + "\nJournal: " + journal + "\nYear: " + year;
        details.push_back(detail);
    }

    void Publications :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                            PUBLICATIONS" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void Presentations :: addDetail(const string& title, const string& conference, const string& year) {
        string detail = "Title: " + title + "\nConference: " + conference + "\nYear: " + year;
        details.push_back(detail);
    }

    void Presentations::saveToFile(ofstream& outFile) const {
        outFile << "                                                                                          PRESENTATIONS" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void Achievements :: addDetail(const string& achievement) {
        details.push_back(achievement);
    }

    void Achievements :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                          ACHIEVEMENTS" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "• " << details[i] << endl;
        }
        outFile << "\n_________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



  
    void Resume3 :: setName(const string& n) { name = n; }
   
    void  Resume3:: setPhoneNumber(const string& pn) { phoneNumber = pn; }
    void  Resume3:: setLinkedIn(const string& li) { linkedIn = li; }
    void  Resume3:: setGitHub(const string& gh) { email = gh; }

    void  Resume3:: addAchievement(const string& achievement) {
        achievements.addDetail(achievement);
    }

    void  Resume3:: saveToFile(const string& filename) {
        ofstream outFile(filename.c_str());
        if (outFile.is_open()) {
        	outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n\n";
			outFile << "                                                                                        " << name << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n\n";

			//outFile << "\tEmail: " << email ;
            outFile << "\tPhone Number: " << phoneNumber ;
            outFile << "\tLinkedIn: " << linkedIn ;
            outFile << "\Email: " << email << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n\n";

            education.saveToFile(outFile);
            workExperience.saveToFile(outFile);
            projects.saveToFile(outFile);
            researchExperience.saveToFile(outFile);
            publications.saveToFile(outFile);
            presentations.saveToFile(outFile);
            achievements.saveToFile(outFile);

            outFile.close();
            cout << "Resume saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << " for writing." << endl;
        }
    }


