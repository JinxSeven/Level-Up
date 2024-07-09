#include <bits/stdc++.h>

class ParkingLot {
    private:
    std::string lotID;
    int floors;
    int spaces;
    std::unordered_map<int, int>floorsSpaces;
    std::unordered_map<int, int>floorsTrucks;
    std::unordered_map<int, int>floorsBikes;
    std::unordered_map<int, int>floorsCars;

    public:
    ParkingLot(std::string lotID, int flrs, int spf) {
        this->lotID = lotID;
        floors = flrs;
        spaces = spf;
        for (int x {0}; x <= flrs; x++) {
            floorsSpaces[x] = spf;
            floorsTrucks[x] = 1;
            floorsBikes[x] = 2;
            floorsCars[x] = spf - 3;
        }
    }

    std::string getLotID() { return this->lotID; }

    int availableSlot(char type, int floor) {
        int slot = 0;
        if (type == 'T') {
            slot = (floorsTrucks[floor] - spaces);
            return ++slot;
        }
        if (type == 'B') { 
            slot = (floorsBikes[floor] - spaces);
            return ++slot;
        }
        if (type == 'C') {
            slot = (floorsCars[floor] - spaces);
            return ++slot;
        }
        return -1;
    }

    int availableFloor(char type) { 
        if (type == 'T') {
            for (int x = 0; x < floorsTrucks.size(); x++) {
                if (floorsTrucks[x] > 0) return x;
            }
        }
        if (type == 'B') {
            for (int x = 0; x < floorsBikes.size(); x++) {
                if (floorsBikes[x] > 0) return x;
            }
        }
        if (type == 'C') {
            for (int x = 0; x < floorsCars.size(); x++) {
                if (floorsCars[x] > 0) return x;
            }
        }
        return -1;
    }
};

class Vehicle {
    private:
    char type;
    std::string regNo;
    std::string color;

    public:
    Vehicle(char type, std::string regNo, std::string color) {
        this->type = type;
        this->regNo = regNo;
        this->color = color;
    }
};

class TicketSystem {
    private:
        ParkingLot *one;
        int avlFloor;
        int avlSlot;

    public:
    TicketSystem(ParkingLot *one) {
        this->one = one;
    }

    bool parkVehicle(char type, std::string regNo, std::string color) {
        Vehicle new_vehicle(type, regNo, color);
        if (type == 'T') {
            avlFloor = one->availableFloor('T');
            if (avlFloor != -1) {
                avlSlot = one->availableSlot('T', avlFloor);
                if (avlSlot != -1) return true;
            }
        }
        return false;
    }

    void generateTicket(char type, std::string regNo, std::string color) {
        if (parkVehicle(type, regNo, color)) {
            std::cout << one->getLotID() << " | FloorNo: " << avlFloor << " | SlotNo: " << avlSlot << std::endl;
        }
    }
    // Incomplete
};
