#pragma once

using namespace std;

template <class TKey, class TValue> class Map {
    private:
        TKey *keys;
        TValue *values;
        unsigned int size;
    public:
        Map() {
            keys = nullptr;
            values = nullptr;
            this->size = 0;
        }

        Map(const Map &m) {
            TKey tempKeys = new TKey[m.size]();
            TValue tempValues = new TValue[m.size]();
            
            for(unsigned int i = 0; i < m.size; i++){
                tempKeys[i] = m.keys[i];
                tempValues[i] = m.values[i];
            }

            size = m.size;
            keys = tempKeys;
            values = tempValues;
        }

        ~Map() {
            delete[] keys;
            delete[] values;
        }

        void add(TKey newKey, TValue newValue) {
            TKey *tempKeys = new TKey[size + 1]();
            TValue *tempValues = new TValue[size + 1]();

            for (unsigned int i = 0; i < size; i++) {
                tempKeys[i] = keys[i];
                tempValues[i] = values[i];
            }
            
            tempKeys[size] = newKey;
            tempValues[size] = newValue;

            delete[] keys;
            delete[] values;
            keys = tempKeys;
            values = tempValues;
            size++;
        }

};