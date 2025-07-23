#ifndef LEAFDUALBMS_H_INCLUDED
#define LEAFDUALBMS_H_INCLUDED
#include "bms.h"

class LeafDualBMS: public BMS {
public:
    void SetCanInterface(CanHardware* can) override;
    void DecodeCAN(int id, uint8_t * data) override;
private:
    bool isMessageCorrupt(uint8_t *data);
};

#endif // LEAFDUALBMS_H_INCLUDED
