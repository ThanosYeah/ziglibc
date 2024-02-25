#ifndef _SYS_UN_H
#define _SYS_UN_H

#include "../../private/sa_family_t.h"

struct sockaddr_un {
    sa_family_t sun_family;
    char sun_path[108];
};

#endif /* _SYS_UN_H */
