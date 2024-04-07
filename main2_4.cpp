#include <iostream>
#include <fstream>
#include <string>
#include <vector>

//#include "template1.h"
#include "template2.h"
//#include "template3.h"
#include "template4.h"
#include "template5.h"
#include "template6.h"
//#include "template7.h"

using namespace std;


int main() {
	
	int ch=1;
	
	cout<<"1.Artistic or Creative Position Application"<<endl << "2.Scholarship Application"<<endl << "3.Applying for college/university"<<endl<<"4.Mass Media/Journalism"<<endl;
	cout<<"enter your choice"<<endl;
	cin>>ch;
	
	cin.ignore();
	
	switch(ch){
				
			case 1: {
				   Resume4 myResume;
				
				    cout << "Enter your name: ";
				    string name;
				    getline(cin, name);
				    myResume.setName(name);
				
				    cout << "Enter your email: ";
				    string email;
				    getline(cin, email);
				    myResume.setEmail(email);
				
				    cout << "Enter your phone number: ";
				    string phoneNumber;
				    getline(cin, phoneNumber);
				    myResume.setPhoneNumber(phoneNumber);
				
				    cout << "Enter link to your portfolio (e.g., website, Behance, Dribbble): ";
				    string portfolioLink;
				    getline(cin, portfolioLink);
				    myResume.setPortfolioLink(portfolioLink);
				
				    char addMore;
				
				    do {
				        cout << "\nEnter details for Project:" << endl;
				        cout << "Enter project name: ";
				        string projectName;
				        getline(cin, projectName);
				        
				        cout << "Enter project description: ";
				        string description;
				        getline(cin, description);
				
				        myResume.addProjectDetail(projectName, description);
				
				        cout << "\nDo you want to add more projects? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    do {
				        cout << "\nEnter artistic skill: ";
				        string skill;
				        getline(cin, skill);
				        myResume.addArtisticSkill(skill);
				
				        cout << "\nDo you want to add more artistic skills? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    do {
				        cout << "\nEnter creative experience: ";
				        string experience;
				        getline(cin, experience);
				        myResume.addCreativeExperience(experience);
				
				        cout << "\nDo you want to add more creative experiences? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    string filename;
				    cout << "\nEnter filename to save the resume (e.g., resume.txt): ";
				    getline(cin, filename);
				    myResume.saveToFile(filename);
				    
				break;
			}
				
				
				case 2:{
					 Resume2 myResume;
				
				    cout << "Enter your name: ";
				    string name;
				    getline(cin, name);
				    myResume.setName(name);
				
				    cout << "Enter your email: ";
				    string email;
				    getline(cin, email);
				    myResume.setEmail(email);
				
				    cout << "Enter your phone number: ";
				    string phoneNumber;
				    getline(cin, phoneNumber);
				    myResume.setPhoneNumber(phoneNumber);
				
				    cout << "Enter your LinkedIn profile: ";
				    string linkedIn;
				    getline(cin, linkedIn);
				    myResume.setLinkedIn(linkedIn);
				
				    cout << "Enter your GitHub profile: ";
				    string gitHub;
				    getline(cin, gitHub);
				    myResume.setGitHub(gitHub);
				
				    char addMore;
				
				    do {
				        cout << "\nEnter details for Education:" << endl;
				        cout << "Enter degree: ";
				        string degree;
				        getline(cin, degree);
				        
				        cout << "Enter university: ";
				        string university;
				        getline(cin, university);
				        
				        cout << "Enter GPA: ";
				        string gpa;
				        getline(cin, gpa);
				        
				        cout << "Enter year of graduation: ";
				        string year;
				        getline(cin, year);
				
				        myResume.addEducationDetail(degree, university, gpa, year);
				
				        cout << "\nDo you want to add more educational qualifications? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    do {
				        cout << "\nEnter details for Position of Responsibility:" << endl;
				        cout << "Enter position of responsibility: ";
				        string position;
				        getline(cin, position);
				        
				        cout << "Enter club name: ";
				        string clubName;
				        getline(cin, clubName);
				        
				        cout << "Enter year: ";
				        string year;
				        getline(cin, year);
				        
				        cout << "Enter description: ";
				       
				   string description;
				        getline(cin, description);
				
				        myResume.addPositionOfResponsibility(position, clubName, year, description);
				
				        cout << "\nDo you want to add more positions of responsibility? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    do {
				        cout << "\nEnter details for Achievement:" << endl;
				        cout << "Enter achievement: ";
				        string achievement;
				        getline(cin, achievement);
				
				        myResume.addAchievement(achievement);
				
				        cout << "\nDo you want to add more achievements? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    do {
				        cout << "\nEnter details for Community Involvement:" << endl;
				        cout << "Enter activity: ";
				        string activity;
				        getline(cin, activity);
				
				        cout << "Enter organization: ";
				        string organization;
				        getline(cin, organization);
				
				        cout << "Enter year: ";
				        string year;
				        getline(cin, year);
				
				        cout << "Enter description: ";
				        string description;
				        getline(cin, description);
				
				        myResume.addCommunityInvolvementDetail(activity, organization, year, description);
				
				        cout << "\nDo you want to add more community involvement details? (y/n): ";
				        cin >> addMore;
				        cin.ignore();
				    } while (addMore == 'y' || addMore == 'Y');
				
				    string filename;
				    cout << "\nEnter filename to save the resume (e.g., scholarship_application.txt): ";
				    getline(cin, filename);
				    myResume.saveToFile(filename);

				break;
				
			}
				
			case 3:{
					 Resume5 myResume;
				    cout << "*****************************************************" << endl;
				    cout << " *             Welcome to Resume Generator           *" << endl;
				    cout << "*****************************************************" << endl;
				
				
				    cout << "Enter your name: ";
				    string name;
				    getline(cin, name);
				    myResume.setName(name);
				
				    //cout << "Enter your email: ";
				    //string email;
				    //getline(cin, email);
				   // myResume.setEmail(email);
				
				    cout << "Enter your phone number: ";
				    string phoneNumber;
				    getline(cin, phoneNumber);
				    myResume.setPhoneNumber(phoneNumber);
				
				    cout << "Enter your LinkedIn profile: ";
				    string linkedIn;
				    getline(cin, linkedIn);
				    myResume.setLinkedIn(linkedIn);
				
				    cout << "Enter your Email: ";
				    string gitHub;
				    getline(cin, gitHub);
				    myResume.setGitHub(gitHub);
				    
				    cout << "Enter your 10th grade details:" << endl;
				    string tenthCGPA;
				        cout << "Enter 10th CGPA: ";
				    getline(cin, tenthCGPA);
				
				    string Board;
				    cout << "Enter 10th Board: ";
				    getline(cin, Board);
				
				
				    string tenthYearOfGraduation;
				    cout << "Enter 10th Year of Graduation: ";
				    getline(cin, tenthYearOfGraduation);
				
				    myResume.addEducation("10th CGPA/Percentage : " + tenthCGPA + "\t  Board : " + Board + "\t Year of Graduation : " + tenthYearOfGraduation);
				
				    cout << "Enter your 12th grade details:" << endl;
				    string twelfthCGPA;
				    cout << "Enter 12th CGPA: ";
				    getline(cin, twelfthCGPA);
				
				    string Boardd;
				    cout << "Enter 10th Board: ";
				    getline(cin, Boardd);
				
				    string twelfthYearOfGraduation;
				    cout << "Enter 12th Year of Graduation: ";
				    getline(cin, twelfthYearOfGraduation);
				
				    myResume.addEducation("12th CGPA : " + twelfthCGPA + "\t  Board : " + Boardd + "\t Year of Graduation : " + twelfthYearOfGraduation);
				
				    cout << "Enter your academic achievements :" << endl;
				    while (true) {
				        cout << "Enter academic achievement : ";
				        string achievement;
				        getline(cin, achievement);
				        myResume.addAcademicAchievement(achievement);
				
				        string choice; 
				        
				        cout << "Do you want to add another academic achievement? (yes/no): ";
				        
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Enter your extracurricular activities:" << endl;
				    while (true) {
				        cout << "Enter extracurricular activity: ";
				        string activity;
				        getline(cin, activity);
				        myResume.addExtracurricularActivity(activity);
				
				        cout << "Do you want to add another extracurricular activity? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Enter your volunteer work details:" << endl;
				    while (true) {
				        cout << "Enter place of work: ";
				        string placeOfWork;
				        getline(cin, placeOfWork);
				
				        cout << "Enter duration: ";
				        string duration;
				        getline(cin, duration);
				
				        cout << "Enter description: ";
				        string description;
				        getline(cin, description);
				
				        myResume.addWorkExperience("Place of Work: " + placeOfWork + "\t Duration: " + duration + "\n Description: " + description);
				
				        cout << "Do you want to add another work experience detail? (yes/no): ";
				        string choice;
					    getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Enter your skills:" << endl;
				    while (true) {
				        cout << "Enter skill: ";
				        string skill;
				        getline(cin, skill);
				        myResume.addSkill(skill);
				
				        cout << "Do you want to add another skill? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Enter your interests/hobbies:" << endl;
				    while (true) {
				        cout << "Enter interest/hobby: ";
				        string interest;
				        getline(cin, interest);
				        myResume.addInterest(interest);
				
				        cout << "Do you want to add another interest/hobby? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				    
				    
				    cout << "Enter your languages known:" << endl;
				    string numLanguages;
				    cout << "How many languages do you know? ";
				    getline(cin, numLanguages);
				    myResume.addLanguage("Number of Languages Known: " + numLanguages);
				
				    while (true) {
				        cout << "Enter language: ";
				    string language;
				    getline(cin, language);
				    myResume.addLanguage(language);
				
				    cout << "Do you want to add another language? (yes/no): ";
				    string choice;
				    getline(cin, choice);
				    if (choice != "yes") {
				        break;
				    }
				}
				
				    
				
				    cout << "Enter filename to save the resume: ";
				    string filename;
				    getline(cin, filename);
				
				    myResume.saveToFile(filename);

				break;
			}
			

		
		case 4:{
			 		 Resume6 myResume;
				
				
				    cout << "Enter your name: ";
				    string name;
				    getline(cin, name);
				    myResume.setName(name);
				
				    cout << "Enter your email: ";
				    string email;
				    getline(cin, email);
				    myResume.setEmail(email);
				
				    cout << "Enter your phone number: ";
				    string phoneNumber;
				    getline(cin, phoneNumber);
				    myResume.setPhoneNumber(phoneNumber);
				
				    cout << "Enter your LinkedIn profile: ";
				    string linkedIn;
				    getline(cin, linkedIn);
				    myResume.setLinkedIn(linkedIn);
				
				
				    cout << "Journalism Experience:" << endl;
				    while (true) {
				        cout << "Enter details of journalism experience: ";
				        string experience;
				        getline(cin, experience);
				        myResume.addJournalismExperience(experience);
				
				        cout << "Do you want to add another journalism experience? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Public Relations Campaigns:" << endl;
				    while (true) {
				        cout << "Enter details of PR campaign: ";
				        string campaign;
				        getline(cin, campaign);
				        myResume.addPRCampaign(campaign);
				
				        cout << "Do you want to add another PR campaign? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Content Creation:" << endl;
				    while (true) {
				        cout << "Enter details of content creation: ";
				        string creation;
				        getline(cin, creation);
				        myResume.addContentCreation(creation);
				
				        cout << "Do you want to add another content creation? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Editing Skills:" << endl;
				    while (true) {
				        cout << "Enter details of editing skills: ";
				        string skill;
				        getline(cin, skill);
				        myResume.addEditingSkill(skill);
				
				        cout << "Do you want to add another editing skill? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "Multimedia Production:" << endl;
				    while (true) {
				        cout << "Enter details of multimedia production: ";
				        string production;
				        getline(cin, production);
				        myResume.addMultimediaProduction(production);
				
				        cout << "Do you want to add another multimedia production detail? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				    cout << "General Skills and Qualifications:" << endl;
				    while (true) {
				        cout << "Enter general skill/qualification: ";
				        string skill;
				        getline(cin, skill);
				        myResume.addGeneralSkill(skill);
				
				        cout << "Do you want to add another general skill/qualification? (yes/no): ";
				        string choice;
				        getline(cin, choice);
				        if (choice != "yes") {
				            break;
				        }
				    }
				
				        cout << "Enter filename to save the resume: ";
				    string filename;
				    getline(cin, filename);
				
				    myResume.saveToFile(filename);

			break;
		}
		
//		case 6:{
//						cout<<"wrong file"<<endl;
//					    Resume1 myResume;
//					
//					    cout << "Enter your name: ";
//					    string name;
//					    getline(cin, name);
//					    myResume.setName(name);
//					
//					    cout << "Enter your email: ";
//					    string email;
//					    getline(cin, email);
//					    myResume.setEmail(email);
//					
//					    cout << "Enter your phone number: ";
//					    string phoneNumber;
//					    getline(cin, phoneNumber);
//					    myResume.setPhoneNumber(phoneNumber);
//					
//					    cout << "Enter your LinkedIn profile: ";
//					    string linkedIn;
//					    getline(cin, linkedIn);
//					    myResume.setLinkedIn(linkedIn);
//					
//					    cout << "Enter your GitHub profile: ";
//					    string gitHub;
//					    getline(cin, gitHub);
//					    myResume.setGitHub(gitHub);
//					
//					    char addMore;
//					
//					    do {
//					        cout << "\nEnter details for Education:" << endl;
//					        cout << "Enter degree: ";
//					        string degree;
//					        getline(cin, degree);
//					        
//					        cout << "Enter university: ";
//					        string university;
//					        getline(cin, university);
//					        
//					        cout << "Enter GPA: ";
//					        string gpa;
//					        getline(cin, gpa);
//					        
//					        cout << "Enter year of graduation: ";
//					        string year;
//					        getline(cin, year);
//					
//					        myResume.addEducationDetail(degree, university, gpa, year);
//					
//					        cout << "\nDo you want to add more educational qualifications? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					
//					    do {
//					        cout << "\nEnter details for Work Experience:" << endl;
//					        cout << "Enter role: ";
//					        string role;
//					        getline(cin, role);
//					        
//					        cout << "Enter company: ";
//					        string company;
//					        getline(cin, company);
//					        
//					        cout << "Enter timeline (e.g., January 2020 - December 2021): ";
//					        string timeline;
//					        getline(cin, timeline);
//					        
//					        cout << "Enter description: ";
//					        string description;
//					        getline(cin, description);
//					
//					        myResume.addWorkExperienceDetail(role, company, timeline, description);
//					
//					        cout << "\nDo you want to add more work experiences? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					
//					    do {
//					        cout << "\nEnter details for Project:" << endl;
//					        cout << "Enter project name: ";
//					        string projectName;
//					        getline(cin, projectName);
//					        
//					        cout << "Enter tech stack used: ";
//					        string techStack;
//					        getline(cin, techStack);
//					        
//					        cout << "Enter timeline (e.g., January 2020 - December 2021): ";
//					        string timeline;
//					        getline(cin, timeline);
//					        
//					        cout << "Enter description: ";
//					        string description;
//					        getline(cin, description);
//					
//					        myResume.addProjectDetail(projectName, techStack, timeline, description);
//					
//					        cout << "\nDo you want to add more projects? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					
//					    do {
//					        cout << "\nEnter details for Position of Responsibility:" << endl;
//					        cout << "Enter position of responsibility: ";
//					        string position;
//					        getline(cin, position);
//					        
//					        cout << "Enter club name: ";
//					        string clubName;
//					        getline(cin, clubName);
//					        
//					        cout << "Enter year: ";
//					        string year;
//					        getline(cin, year);
//					        
//					        cout << "Enter description: ";
//					        string description;
//					        getline(cin, description);
//					
//					        myResume.addPositionOfResponsibility(position, clubName, year, description);
//					
//					        cout << "\nDo you want to add more positions of responsibility? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					
//					    
//					    
//					    do {
//					        cout << "\nEnter technical skill: ";
//					        string skill;
//					        getline(cin, skill);
//					        myResume.addTechnicalSkill(skill);
//					
//					        cout << "\nDo you want to add more technical skills? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					
//					    do {
//					        cout << "\nEnter details for Soft Skill:" << endl;
//					        cout << "Enter soft skill: ";
//					        string skill;
//					        getline(cin, skill);
//					
//					        myResume.addSoftSkill(skill);
//					
//					        cout << "\nDo you want to add more soft skills? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					
//						do {
//					        cout << "\nEnter details for Achievement:" << endl;
//					        cout << "Enter achievement: ";
//					        string achievement;
//					        getline(cin, achievement);
//					
//					        myResume.addAchievement(achievement);
//					
//					        cout << "\nDo you want to add more achievements? (y/n): ";
//					        cin >> addMore;
//					        cin.ignore();
//					    } while (addMore == 'y' || addMore == 'Y');
//					    
//					    string filename;
//					    cout << "\nEnter filename to save the resume (e.g., resume.txt): ";
//					    getline(cin, filename);
//					    myResume.saveToFile(filename);

////			break;
//		}
				
			default: cout<<"ty";	
	}

    return 0;
}

