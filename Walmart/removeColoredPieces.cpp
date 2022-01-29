    bool winnerOfGame(string colors) {
        int count_a = 0;
        int count_b = 0;
        int i = 0;
        while (true){
                int count = 0;
                while(i < colors.length() && colors[i] == 'A'){
                    count++;
                    i++;
                }
            
                if (count >= 3) count_a += count-2;
            if (i == colors.length()) break;
                count = 0;
                while(i < colors.length() && colors[i] == 'B'){
                    count++;
                    i++;
                }
                if (count >= 3) count_b += count-2;
            if (i == colors.length()) break;
        }
        
        if (count_a > count_b) return true;
        else return false;
    }
