//
// Created by z003j23c on 7/18/2018.
//

#ifndef RANDOMMASTERPICKINGSTRATEGY_H
#define RANDOMMASTERPICKINGSTRATEGY_H



class RandomMasterPickingStrategy : public IMasterPickingStrategy{
public:
    const Fighter &Pick() override;
};

#endif //UNTITLED1_RANDOMMASTERPICKINGSTRATEGY_H