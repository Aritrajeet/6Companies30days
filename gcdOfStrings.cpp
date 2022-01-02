//Iff strings on concat give same result, they have gcd. Finding GCD of size of string will do because they are basically the repeatition of the same pattern.
string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) 
            return "";
        return str1.substr(0,gcd(str1.size(),str2.size()));
