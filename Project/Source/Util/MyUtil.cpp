#include "MyUtil.h"

#define TO_STR_I(x) #x
#define TO_STR(x) TO_STR_I(x)

std::string getCommitId()
{
  return TO_STR(MY_PLUGIN_COMMIT_ID);
}
