class Solution {
public:
  int numUniqueEmails(vector<string> &emails) {
    set<string> mails;
    for (string email : emails) {
      string localName = email.substr(0, email.find('@'));
      localName = email.substr(0, email.find('+'));
      localName = regex_replace(localName, regex("\\."), "");
      string domainName = email.substr(email.find('@') + 1, email.size());
      email = localName + '@' + domainName;
      mails.insert(email);
    }
    return mails.size();
  }
};