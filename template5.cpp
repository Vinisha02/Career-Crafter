#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template5.h"

using namespace std;

  void Resume5 :: setName(const string& n) { name = n; }
    //void Resume5:: addEmail (const string& e) { email = e; }
    void  Resume5:: setPhoneNumber(const string& pn) { phoneNumber = pn; }
    void  Resume5:: setLinkedIn(const string& li) { linkedIn = li; }
    void  Resume5:: setGitHub(const string& gh) { gitHub = gh; }

    void Resume5 ::addEducation(const string& detail) {
        education.push_back(detail);
    }

    void Resume5 ::addAcademicAchievement(const string& achievement) {
        academicAchievements.push_back(achievement);
    }

    void Resume5 ::addExtracurricularActivity(const string& activity) {
        extracurricularActivities.push_back(activity);
    }

    void Resume5 ::addWorkExperience(const string& experience) {
        workExperience.push_back(experience);
    }

    void Resume5 ::addSkill(const string& skill) {
        skills.push_back(skill);
    }

    void Resume5 ::addInterest(const string& interest) {
        interests.push_back(interest);
    }
    
    void Resume5 ::addLanguage(const string& language) {
    languages.push_back(language);
    }

    void Resume5 :: saveToFile(const string& filename) const {
        ofstream outFile(filename.c_str());
        if (outFile.is_open()) {

        
        	outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n";
            outFile << "                                                                                                                                                                                    "<<endl<<endl;
			outFile << "                                                                                        " << name << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;

			//outFile << "\tEmail: " << email ;
            outFile << "\tPhone Number: " << phoneNumber ;
            outFile << "\t\tLinkedIn: " << linkedIn ;
            outFile << "\t\tEmail: " << gitHub << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;


            outFile << "Education" << endl;
            for (vector<string>::const_iterator it = education.begin(); it != education.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________"<<endl << endl;

            outFile << "Academic Achievements" << endl;
            for (vector<string>::const_iterator it = academicAchievements.begin(); it != academicAchievements.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________"<<endl << endl;

            outFile << "Extracurricular Activities" << endl;
            for (vector<string>::const_iterator it = extracurricularActivities.begin(); it != extracurricularActivities.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________"<<endl<< endl;

            outFile << "Work Experience" << endl;
            for (vector<string>::const_iterator it = workExperience.begin(); it != workExperience.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "Skills" << endl;
            for (vector<string>::const_iterator it = skills.begin(); it != skills.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "Interests/Hobbies" << endl;
            for (vector<string>::const_iterator it = interests.begin(); it != interests.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;


            outFile << "Languages Known" << endl;
            for (vector<string>::const_iterator it = languages.begin(); it != languages.end(); ++it) {
            outFile << "=> " << *it << endl;
            }
            outFile << "__________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile.close();
            cout << "Resume saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << " for writing." << endl;
        }
    }
    
