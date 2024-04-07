#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


class Portfolio {
private:
    std::vector<std::string> projects;
public:
    void addProject(const std::string& projectName, const std::string& description);
    void saveToFile(std::ofstream& outFile) const;
};

class ArtisticSkills {
private:
    std::vector<std::string> skills;
public:
    void addSkill(const std::string& skill);
    void saveToFile(std::ofstream& outFile) const;
};

class CreativeExperience {
private:
    std::vector<std::string> experiences;
public:
    void addExperience(const std::string& experience);
    void saveToFile(std::ofstream& outFile) const;
};

class Resume4 {
private:
    std::string name;
    std::string email;
    std::string phoneNumber;
    std::string portfolioLink;
    Portfolio portfolio;
    ArtisticSkills artisticSkills;
    CreativeExperience creativeExperience;
public:
    void setName(const std::string& n);
    void setEmail(const std::string& e);
    void setPhoneNumber(const std::string& pn);
    void setPortfolioLink(const std::string& pl);
    void saveToFile(const std::string& filename);
    void addProjectDetail(const std::string& projectName, const std::string& description);
    void addArtisticSkill(const std::string& skill);
    void addCreativeExperience(const std::string& experience);
};

