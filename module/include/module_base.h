#ifndef __MODULE_BASE_H__
#define __MODULE_BASE_H__

#include <systemc.h>
#include <tlm_utils/simple_initiator_socket.h>
#include <tlm_utils/simple_target_socket.h>
#include <cstdarg>

class ModuleBase : public sc_module {
  public:
    explicit ModuleBase(sc_module_name sc_name)
      : sc_module(sc_name) {
      }

    /* Print Out Function */
    void DbgInfo(const char *format, ...) {
      va_list args;
      va_start(args, format);
      vsnprintf(msg_, sizeof(msg_), format, args);
      va_end(args);

      SC_REPORT_INFO(name(), msg_);
    }

    void DbgInfoVerb(int verbosity, const char *format, ...) {
      va_list args;
      va_start(args, format);
      vsnprintf(msg_, sizeof(msg_), format, args);
      va_end(args);

      SC_REPORT_INFO_VERB(name(), msg_, verbosity);
    }

    void DbgWarning(const char *format, ...) {
      va_list args;
      va_start(args, format);
      vsnprintf(msg_, sizeof(msg_), format, args);
      va_end(args);

      SC_REPORT_WARNING(name(), msg_);
    }

    void DbgError(const char *format, ...) {
      va_list args;
      va_start(args, format);
      vsnprintf(msg_, sizeof(msg_), format, args);
      va_end(args);

      SC_REPORT_ERROR(name(), msg_);
    }

    void DbgFatal(const char *format, ...) {
      va_list args;
      va_start(args, format);
      vsnprintf(msg_, sizeof(msg_), format, args);
      va_end(args);

      SC_REPORT_FATAL(name(), msg_);
    }
    /* End of Print Out Function */

  private:
    char msg_[1024];
};

#endif

