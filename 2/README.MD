## ARDUINO

analogWrite() -> solo adminete valores entre 0 -256;

cuando se usa un potenciometro con analogRead() los valores que devuelve
van entre el 0 -1024. Por lo tanto para asignar este valor con 
analogWrite() se debe / 4 lo que arroja el potenciometro.
