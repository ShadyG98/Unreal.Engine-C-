/*
 * Patient Registration System using Linked List
 */
#include <iostream>
#include <cstring>
#include <iomanip>

const int MAX_CHAR = 50;

struct Node {
    int code;
    char name[MAX_CHAR];
    char lastName[MAX_CHAR];
    char address[MAX_CHAR];
    int phone;
    Node* next;
};

typedef Node* PatientList;

// Function prototypes
void displayMenu();
void updateMenu();
void registerPatient(PatientList& list);
void deletePatient(PatientList& list);
void updatePatient(PatientList list);
void displayPatients(PatientList list);
void copyPatientData(PatientList list);

void displayMenu() {
    std::cout << "\n\t[ PATIENT REGISTRATION SYSTEM ]\n";
    std::cout << "\t--------------------------------\n\n";
    std::cout << " 1. Register Patient\n";
    std::cout << " 2. Delete Patient\n";
    std::cout << " 3. Update Patient\n";
    std::cout << " 4. Display List\n";
    std::cout << " 5. Copy Patient Data\n";
    std::cout << " 6. Exit\n";
    std::cout << "\n Enter option: ";
}

void updateMenu() {
    std::cout << "\n\t[ UPDATE FIELD ]\n";
    std::cout << "\t------------------------\n\n";
    std::cout << " 1. Name\n";
    std::cout << " 2. Last Name\n";
    std::cout << " 3. Address\n";
    std::cout << " 4. Phone\n";
    std::cout << " 5. Exit\n";
    std::cout << "\n Enter option: ";
}

void registerPatient(PatientList& list) {
    PatientList newNode = new Node;

    std::cout << "\n\n\t[ REGISTRATION ]\n";
    std::cout << "\t---------------\n";
    std::cout << "\n Patient Data ";
    std::cout << "\n\n Code: ";
    std::cin >> newNode->code;
    std::cin.ignore();
    std::cout << "\n Name: ";
    std::cin.getline(newNode->name, MAX_CHAR);
    std::cout << " Last Name: ";
    std::cin.getline(newNode->lastName, MAX_CHAR);
    std::cout << " Address: ";
    std::cin.getline(newNode->address, MAX_CHAR);
    std::cout << "\n Phone: ";
    std::cin >> newNode->phone;

    newNode->next = nullptr;

    if (list == nullptr) {
        list = newNode;
    } else {
        PatientList current = list;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void deletePatient(PatientList& list) {
    int code;
    PatientList current = list;
    PatientList previous = nullptr;

    std::cout << "\n\n\t DELETE PATIENT";
    std::cout << "\n\n Enter code: ";
    std::cin >> code;

    while (current != nullptr) {
        if (current->code == code) {
            if (current == list) {
                list = list->next;
            } else {
                previous->next = current->next;
            }
            delete current;
            std::cout << "\n\n Record deleted...!\n";
            return;
        } else {
            previous = current;
            current = current->next;
        }
    }
    std::cout << "\n Invalid code...!!\n";
}

void updatePatient(PatientList list) {
    int code, option;
    PatientList current = list;

    std::cout << "\n\n\t UPDATE PATIENT RECORD";
    std::cout << "\n\n Enter code: ";
    std::cin >> code;

    while (current != nullptr) {
        if (current->code == code) {
            std::cout << "\n Patient Data  ";
            std::cout << "\n--------------------";
            std::cout << "\n\n Code   : " << current->code << std::endl;
            std::cout << "\n Name  : " << current->name << std::endl;
            std::cout << " Last Name: " << current->lastName << std::endl;
            std::cout << " Address: " << current->address << std::endl;
            std::cout << " Phone : " << current->phone << std::endl;

            updateMenu();
            std::cin >> option;

            std::cin.ignore();
            switch (option) {
                case 1:
                    std::cout << "\n\n Enter Name: ";
                    std::cin.getline(current->name, MAX_CHAR);
                    break;
                case 2:
                    std::cout << "\n\n Enter Last Name: ";
                    std::cin.getline(current->lastName, MAX_CHAR);
                    break;
                case 3:
                    std::cout << "\n\n Enter Address: ";
                    std::cin.getline(current->address, MAX_CHAR);
                    break;
                case 4:
                    std::cout << "\n\n Enter Phone: ";
                    std::cin >> current->phone;
                    break;
                case 5:
                    return;
                default:
                    std::cout << "\n Enter valid option...\n";
                    break;
            }
            std::cout << "\n\n Record updated...!\n";
            return;
        } else {
            current = current->next;
        }
    }
    std::cout << "\n Invalid code...!!\n";
}

void displayPatients(PatientList current) {
    int i = 1;

    while (current != nullptr) {
        std::cout << "\n Patient Data [" << i << "] ";
        std::cout << "\n------------------------";
        std::cout << "\n\n Code   : " << current->code << std::endl;
        std::cout << "\n Name  : " << current->name << std::endl;
        std::cout << " Last Name: " << current->lastName << std::endl;
        std::cout << " Address: " << current->address << std::endl;
        std::cout << " Phone : " << current->phone << std::endl;

        current = current->next;
        i++;
    }
}

void copyPatientData(PatientList list) {
    int code1, code2;
    PatientList source = list;
    PatientList target = list;
    char data[MAX_CHAR];

    std::cout << "\n\n\t COPY PATIENT DATA";
    std::cout << "\n\n\t----------------------";
    std::cout << "\n\n Enter source patient code: ";
    std::cin >> code1;
    std::cout << "\n\n Enter target patient code: ";
    std::cin >> code2;
    system("cls");

    while (source != nullptr) {
        if (source->code == code1) {
            std::cout << "\n Source Patient Data ";
            std::cout << "\n----------------------";
            std::cout << "\n\n Code   : " << source->code << std::endl;
            std::cout << "\n Name  : " << source->name << std::endl;
            std::cout << " Last Name: " << source->lastName << std::endl;
            std::cout << " Address: " << source->address << std::endl;
            std::cout << " Phone : " << source->phone << std::endl;
        }
        source = source->next;
    }

    while (target != nullptr) {
        if (target->code == code2) {
            std::cout << "\n Target Patient Data ";
            std::cout << "\n----------------------";
            std::cout << "\n\n Code   : " << target->code << std::endl;
            std::cout << "\n Name  : " << target->name << std::endl;
            std::cout << " Last Name: " << target->lastName << std::endl;
            std::cout << " Address: " << target->address << std::endl;
            std::cout << " Phone : " << target->phone << std::endl;

            std::cout << "\n Select field to copy:\n";
            std::cout << " 1. Name\n";
            std::cout << " 2. Last Name\n";
            std::cout << " 3. Address\n";
            std::cout << " 4. Phone\n";
            std::cin >> option;

            switch (option) {
                case 1:
                    strcpy(data, source->name);
                    strcpy(target->name, data);
                    break;
                case 2:
                    strcpy(data, source->lastName);
                    strcpy(target->lastName, data);
                    break;
                case 3:
                    strcpy(data, source->address);
                    strcpy(target->address, data);
                    break;
                case 4:
                    target->phone = source->phone;
                    break;
                default:
                    std::cout << "\n Invalid option...\n";
                    return;
            }
            std::cout << "\n\n Record updated...!\n";
            return;
        } else {
            target = target->next;
        }
    }

    if (target == nullptr) {
        std::cout << "\n Invalid code...!!\n";
    }
}

int main() {
    PatientList list = nullptr;
    int option;

    do {
        displayMenu();
        std::cin >> option;

        switch (option) {
            case 1:
                registerPatient(list);
                break;
            case 2:
                if (list == nullptr) {
                    std::cout << "\n No registered patients...!!\n";
                } else {
                    deletePatient(list);
                }
                break;
            case 3:
                if (list == nullptr) {
                    std::cout << "\n No registered patients...!!\n";
                } else {
                    updatePatient(list);
                }
                break;
            case 4:
                if (list == nullptr) {
                    std::cout << "\n No registered patients...!!\n";
                } else {
                    displayPatients(list);
                }
                break;
            case 5:
                if (list == nullptr) {
                    std::cout << "\n No registered patients...!!\n";
                } else {
                    copyPatientData(list);
                }
                break;
            case 6:
                return 0;
            default:
                std::cout << "\n Enter valid option...\n";
                break;
        }

        system("pause");
        system("cls");

    } while (option != 6);

    return 0;
}
