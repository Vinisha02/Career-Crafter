#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "template7.h"


using namespace std;



    void CreativeProfile :: setName(const string& n) { name = n; }
    void  CreativeProfile :: setPhoneNumber(const string& pn) { phoneNumber = pn; }
    void  CreativeProfile :: setEmail(const string& e) { email = e; }
    void  CreativeProfile :: setObjective(const string& obj) { objective = obj; }

    void  CreativeProfile :: addProductionExperience(const string& experience) {
        productionExperience.push_back(experience);
    }

    void  CreativeProfile :: addMemorableProject(const string& project) {
        memorableProjects.push_back(project);
    }

    void  CreativeProfile :: addKeyTalent(const string& talent) {
        keyTalents.push_back(talent);
    }

    void  CreativeProfile :: addNotableProject(const string& project) {
        notableProjects.push_back(project);
    }

    void  CreativeProfile :: addQualification(const string& qualification) {
        qualifications.push_back(qualification);
    }

    void  CreativeProfile :: addAwardsImpact(const string& impact) {
        awardsImpact.push_back(impact);
    }

    void  CreativeProfile :: addInfluentialWork(const string& work) {
        influentialWork.push_back(work);
    }
    
    void  CreativeProfile :: addTechnicalProficiency(const string& proficiency) {
        technicalProficiency.push_back(proficiency);
    }

    void  CreativeProfile :: addStandoutAbilities(const string& abilities) {
        standoutAbilities.push_back(abilities);
    }

    void  CreativeProfile :: addLiveVsScreen(const string& experience) {
        liveVsScreen.push_back(experience);
    }

    void  CreativeProfile :: addCreativeInnovation(const string& innovation) {
        creativeInnovation.push_back(innovation);
    }

    void  CreativeProfile :: addLeadershipExperience(const string& experience) {
        leadershipExperience.push_back(experience);
    }

    void  CreativeProfile :: addMusicalInfluence(const string& influence) {
        musicalInfluence.push_back(influence);
    }

    void  CreativeProfile :: addStorytellingApproach(const string& approach) {
        storytellingApproach.push_back(approach);
    }

    void  CreativeProfile :: saveToFile(const string& filename) const {
        ofstream outFile(filename.c_str());
        if (outFile.is_open()) {

            outFile << "**************************************************************************************************************\n" << endl;
            outFile << "*                                         CREATIVE PROFILE                                         *\n" << endl;
            outFile << "**************************************************************************************************************\n" << endl;
            
            outFile << "Name: " << name << endl;
            outFile << "Email: " << email << endl;
            outFile << "Phone Number: " << phoneNumber << endl;
            outFile << "Objective: " << objective << endl;
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Production Experience" << endl;
            for (size_t i = 0; i < productionExperience.size(); ++i) {
                outFile << "=> " << productionExperience[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Memorable Projects" << endl;
            for (size_t i = 0; i < memorableProjects.size(); ++i) {
                outFile << "=> " << memorableProjects[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Key Talents" << endl;
            for (size_t i = 0; i < keyTalents.size(); ++i) {
                outFile << "=> " << keyTalents[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Notable Projects" << endl;
            for (size_t i = 0; i < notableProjects.size(); ++i) {
                outFile << "=> " << notableProjects[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Qualifications" << endl;
            for (size_t i = 0; i < qualifications.size(); ++i) {
                outFile << "=> " << qualifications[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Awards Impact" << endl;
            for (size_t i = 0; i < awardsImpact.size(); ++i) {
                outFile << "=> " << awardsImpact[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Influential Work" << endl;
            for (size_t i = 0; i < influentialWork.size(); ++i) {
                outFile << "=> " << influentialWork[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Technical Proficiency" << endl;
            for (size_t i = 0; i < technicalProficiency.size(); ++i) {
                outFile << "=> " << technicalProficiency[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Standout Abilities" << endl;
            for (size_t i = 0; i < standoutAbilities.size(); ++i) {
                outFile << "=> " << standoutAbilities[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Live Vs. Screen Experience" << endl;
            for (size_t i = 0; i < liveVsScreen.size(); ++i) {
                outFile << "=> " << liveVsScreen[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Creative Innovation" << endl;
            for (size_t i = 0; i < creativeInnovation.size(); ++i) {
                outFile << "=> " << creativeInnovation[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Leadership Experience" << endl;
            for (size_t i = 0; i < leadershipExperience.size(); ++i) {
                outFile << "=> " << leadershipExperience[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Musical Influence" << endl;
            for (size_t i = 0; i < musicalInfluence.size(); ++i) {
                outFile << "=> " << musicalInfluence[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile << "Storytelling Approach" << endl;
            for (size_t i = 0; i < storytellingApproach.size(); ++i) {
                outFile << "=> " << storytellingApproach[i] << endl;
            }
            outFile << "___________________________________________________________________________________________________________\n" << endl;

            outFile.close();
            cout << "Creative Profile saved to " << filename << endl;
        } else {
            cout << "Unable to open file " << filename << " for writing." << endl;
        }
    }


