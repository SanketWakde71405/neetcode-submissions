class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int pos = 0;
        string localName="";
        string domainName="";
        vector<string> uniqueMail;
        for(string email:emails){
            pos=email.find('@');
            localName= email.substr(0,pos);
            domainName=email.substr(pos);
            pos=localName.find('+');

            if(pos!=string::npos) {
                localName=localName.substr(0,pos);
            }

            localName.erase(remove(localName.begin(), localName.end(),    '.'),localName.end());

            uniqueMail.push_back(localName+domainName);

        }

        


        sort(uniqueMail.begin(), uniqueMail.end());
uniqueMail.erase(unique(uniqueMail.begin(),uniqueMail.end()),uniqueMail.end());

        return uniqueMail.size();

    }
};