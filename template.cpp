#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template1.h"

using namespace std;


    void Education :: addDetail(const string& degree, const string& university, const string& gpa, const string& year) {
        string detail = "Degree	:	" + degree + "\nUniversity	:	" + university + "\nGPA		:	" + gpa + "\nYear of Graduation:	" + year;
        details.push_back(detail);
    }

    void Education :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                              EDUCATION" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "-> " << details[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }


    void WorkExperience :: addDetail (const string& role, const string& company, const string& timeline, const string& description) {
        string detail = "Role		:	" + role + "\nCompany		:	" + company + "\nTimeline	:	" + timeline + "\nDescription	:	" + description;
        details.push_back(detail);
    }

    void WorkExperience :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                WORK EXPERIENCE" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "-> " << details[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }




    void Projects :: addDetail(const string& projectName, const string& techStack, const string& timeline, const string& description) {
        string detail = "Project Name		: " + projectName + "\nTech Stack		: " + techStack + "\nTimeline		: " + timeline + "\nDescription		: " + description;
        details.push_back(detail);
    }

    void Projects :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                   PROJECTS" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "-> " << details[i] << endl;
        }
        outFile << "\n_________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void PositionsOfResponsibility :: addDetail(const string& position, const string& clubName, const string& year, const string& description) {
        string detail = "Position of Responsibility	:	" + position + "\nClub Name		:	" + clubName + "\nYear			:	" + year + "\nDescription		:	" + description;
        details.push_back(detail);
    }

    void PositionsOfResponsibility :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                             POSITION OF RESPONSIBILITY" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "-> " << details[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void Achievements :: addDetail(const string& achievement) {
        details.push_back(achievement);
    }

    void Achievements :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                 ACHIEVEMENTS" << endl;
        for (size_t i = 0; i < details.size(); ++i) {
            outFile << "-> " << details[i] << endl;
        }
        outFile << "\n________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }


    void TechnicalSkills :: addSkill(const string& skill) {
        skills.push_back(skill);
    }

    void TechnicalSkills :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                               TECHNICAL SKILLS" << endl;
        for (vector<string>::const_iterator it = skills.begin(); it != skills.end(); ++it) {
            outFile << "-> " << *it << endl;
        }
        outFile << "\n_______________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void SoftSkills :: addSkill(const string& skill) {
        skills.push_back(skill);
    }

    void SoftSkills :: saveToFile(ofstream& outFile) const {
        outFile << "                                                                                 SOFT SKILLS" << endl;
        for (size_t i = 0; i < skills.size(); ++i) {
            outFile << "-> " << skills[i] << endl;
        }
        outFile << "\n_______________________________________________________________________________________________________________________________________________________________________________________\n" << endl;
    }



    void Resume1 :: setName(const string& n) { name = n; }
    void Resume1 :: setEmail(const string& e) { email = e; }
    void Resume1 :: setPhoneNumber(const string& pn) { phoneNumber = pn; }
    void Resume1 :: setLinkedIn(const string& li) { linkedIn = li; }
    void Resume1 :: setGitHub(const string& gh) { gitHub = gh; }

void Resume1 :: saveToFile(const string& filename) {
        ofstream outFile(filename.c_str());
        if (outFile.is_open()) {
        	outFile << "___________________________________________________________________________________________________________________________________________________________________________________________" << endl;
            outFile << "                                                                                                                                                                                        " << endl;
			outFile  << "                                                                              " << name << endl;
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________" << endl;
            outFile << "                                                                                                                                                                                        " << endl;
			outFile << "                      Email: " << email ;
            outFile << "\t\t" ;
            outFile << "Phone Number: " << phoneNumber ;
            outFile << "\t\t" ;
            outFile << "LinkedIn: " << linkedIn ;
            outFile << "\t\t" ;
            outFile << "GitHub: " << gitHub << endl;
            
            outFile << "\n____________________________________________________________________________________________________________________________________________________________________________________________\n"<<endl;

            education.saveToFile(outFile);
            
            
            workExperience.saveToFile(outFile);
            
            
            projects.saveToFile(outFile);
            
            
            positionsOfResponsibility.saveToFile(outFile);
            
            technicalSkills.saveToFile(outFile);
            
            softSkills.saveToFile(outFile);
            
            achievements.saveToFile(outFile);
            

            outFile.close();
            cout << "Resume saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << " for writing." << endl;
        }
    }
    
    void Resume1 ::  addEducationDetail(const string& degree, const string& university, const string& gpa, const string& year) {
        education.addDetail(degree, university, gpa, year);
    }

    void Resume1 :: addWorkExperienceDetail(const string& role, const string& company, const string& timeline, const string& description) {
        workExperience.addDetail(role, company, timeline, description);
    }

    void Resume1 :: addProjectDetail(const string& projectName, const string& techStack, const string& timeline, const string& description) {
        projects.addDetail(projectName, techStack, timeline, description);
    }

    void Resume1 :: addPositionOfResponsibility(const string& position, const string& clubName, const string& year, const string& description) {
        positionsOfResponsibility.addDetail(position, clubName, year, description);
    }

    void Resume1 :: addAchievement(const string& achievement) {
        achievements.addDetail(achievement);
    }
	void Resume1 :: addTechnicalSkill(const string& skill) {
        technicalSkills.addSkill(skill);
    }
    void Resume1 :: addSoftSkill(const string& skill) {
        softSkills.addSkill(skill);
    }


