#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template6.h"

using namespace std;



    void Resume6 :: setName(const string& n) { name = n; }
    void  Resume6 ::  setEmail(const string& e) { email = e; }
    void Resume6 ::  setPhoneNumber(const string& pn) { phoneNumber = pn; }
    void  Resume6:: setLinkedIn(const string& li) { linkedIn = li; }
 	
    
    void  Resume6 ::  addJournalismExperience(const string& experience) {
        journalismExperience.push_back(experience);
    }

    void  Resume6 ::  addPRCampaign(const string& campaign) {
        prCampaigns.push_back(campaign);
    }

    void  Resume6 :: addContentCreation(const string& creation) {
        contentCreation.push_back(creation);
    }

    void  Resume6 :: addEditingSkill(const string& skill) {
        editingSkills.push_back(skill);
    }

    void  Resume6 :: addMultimediaProduction(const string& production) {
        multimediaProduction.push_back(production);
    }

    void  Resume6 :: addGeneralSkill(const string& skill) {
        generalSkills.push_back(skill);
    }

    void  Resume6 :: saveToFile(const string& filename) const {
        ofstream outFile(filename.c_str());
        if (outFile.is_open()) {

        
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________\n";
            outFile << "                                                                                                                                                                                    "<<endl<<endl;
			outFile << "                                                                                        " << name << endl;
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;

			outFile << "\t\tEmail: " << email ;
            outFile << "\t\tPhone Number: " << phoneNumber ;
            outFile << "\t\tLinkedIn: " << linkedIn << endl;
           
            outFile << "___________________________________________________________________________________________________________________________________________________________________________________________"<<endl<<endl;

            outFile << "Journalism Experience" << endl;
            for (vector<string>::const_iterator it = journalismExperience.begin(); it != journalismExperience.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "Public Relations Campaigns" << endl;
            for (vector<string>::const_iterator it = prCampaigns.begin(); it != prCampaigns.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "Content Creation" << endl;
            for (vector<string>::const_iterator it = contentCreation.begin(); it != contentCreation.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "Editing Skills" << endl;
            for (vector<string>::const_iterator it = editingSkills.begin(); it != editingSkills.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "Multimedia Production" << endl;
            for (vector<string>::const_iterator it = multimediaProduction.begin(); it != multimediaProduction.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile << "General Skills" << endl;
            for (vector<string>::const_iterator it = generalSkills.begin(); it != generalSkills.end(); ++it) {
                outFile << "=> " << *it << endl;
            }
            outFile << "____________________________________________________________________________________________________________________________________________________________________________________________\n" << endl;

            outFile.close();
            cout << "Resume saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << " for writing." << endl;
        }
    }


