#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template4.h"

using namespace std;


    void Portfolio :: addProject(const string& projectName, const string& description) {
        string project = "Project Name: " + projectName + "\nDescription: " + description;
        projects.push_back(project);
    }

    void Portfolio :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                             PORTFOLIO" << endl;
        for (size_t i = 0; i < projects.size(); ++i) {
            outFile << "• " << projects[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void ArtisticSkills :: addSkill(const string& skill) {
        skills.push_back(skill);
    }

    void ArtisticSkills :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                               ARTISTIC SKILLS" << endl;
        for (size_t i = 0; i < skills.size(); ++i) {
            outFile << "• " << skills[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }


    void CreativeExperience :: addExperience(const string& experience) {
        experiences.push_back(experience);
    }

    void CreativeExperience :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                               CREATIVE EXPERIENCE" << endl;
        for (size_t i = 0; i < experiences.size(); ++i) {
            outFile << "• " << experiences[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }

    void Resume4 :: setName(const string& n) { name = n; }
    void Resume4 :: setEmail(const string& e) { email = e; }
    void Resume4 :: setPhoneNumber(const string& pn) { phoneNumber = pn; }
    void Resume4 :: setPortfolioLink(const string& pl) { portfolioLink = pl; }

    void Resume4 :: saveToFile(const string& filename) {
        ofstream outFile(filename.c_str());
        if (outFile.is_open()) {
        	outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n\n";
			outFile << "                                                                             "<<name << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n\n";

			outFile << "\tEmail: " << email ;
            outFile << "\t\tPhone Number: " << phoneNumber ;
            outFile << "\t\tPortfolio Link: " << portfolioLink << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n\n";

            portfolio.saveToFile(outFile);
            artisticSkills.saveToFile(outFile);
            creativeExperience.saveToFile(outFile);

            outFile.close();
            cout << "Resume saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << " for writing." << endl;
        }
    }

    void Resume4 :: addProjectDetail(const string& projectName, const string& description) {
        portfolio.addProject(projectName, description);
    }

    void Resume4 :: addArtisticSkill(const string& skill) {
        artisticSkills.addSkill(skill);
    }

    void Resume4 :: addCreativeExperience(const string& experience) {
        creativeExperience.addExperience(experience);
    }

