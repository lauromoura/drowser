#include "PlatformClient.h"
#include "UserMediaClient.h"

WebKit::WebUserMediaClient* PlatformClient::createUserMediaClient()
{
    return new UserMediaClient();
}
