#pragma once

#include <aidl/vendor/xiaomi/hardware/misys/common/BnMiSysImpl.h>

namespace aidl::vendor::xiaomi::hardware::misys::common {

using ndk::ScopedAStatus;

class MiSysImpl : public BnMiSysImpl {
public:
    ScopedAStatus DirListFiles(const std::string&, std::vector<FileInfo>*) override { return ScopedAStatus::ok(); }
    ScopedAStatus EraseFileOrDirectory(const std::string&, const std::string&) override { return ScopedAStatus::ok(); }
    ScopedAStatus MiSysReadFile(const std::string&, const std::string&, std::string* r) override { r->clear(); return ScopedAStatus::ok(); }
    ScopedAStatus MiSysWriteFile(const std::string&, const std::string&, const std::string&, int32_t, int8_t) override { return ScopedAStatus::ok(); }
    ScopedAStatus IsExists(const std::string&, const std::string&, bool* r) override { *r = false; return ScopedAStatus::ok(); }
    ScopedAStatus MiSysCreateFolder(const std::string&, const std::string&) override { return ScopedAStatus::ok(); }
    ScopedAStatus MiSysReadBuffer(const std::string&, const std::string&, std::vector<uint8_t>*) override { return ScopedAStatus::ok(); }
    ScopedAStatus MiSysWriteBuffer(const std::string&, const std::string&, const std::vector<uint8_t>&, int64_t) override { return ScopedAStatus::ok(); }
    ScopedAStatus SetVirtualCameraConfig(int32_t, int32_t, double, bool* r) override { *r = false; return ScopedAStatus::ok(); }
    ScopedAStatus ConnectVirtualCamera(bool* r) override { *r = false; return ScopedAStatus::ok(); }
    ScopedAStatus DisconnectVirtualCamera(bool* r) override { *r = false; return ScopedAStatus::ok(); }
    ScopedAStatus OnFrameData(const std::vector<uint8_t>&, int32_t, bool* r) override { *r = false; return ScopedAStatus::ok(); }
    ScopedAStatus RegisterVCameraCallback(const std::shared_ptr<IVCameraCallback>&) override { return ScopedAStatus::ok(); }
    ScopedAStatus UnregisterVCameraCallback() override { return ScopedAStatus::ok(); }
    ScopedAStatus GetFileSize(const std::string&, const std::string&, int64_t* r) override { *r = 0; return ScopedAStatus::ok(); }
    ScopedAStatus MiSysSetProp(const std::string&, const std::string&) override { return ScopedAStatus::ok(); }
    ScopedAStatus ReadFromFile(const Ashmem&, const std::string&, const std::string&) override { return ScopedAStatus::ok(); }
    ScopedAStatus WriteToFile(const Ashmem&, const std::string&, const std::string&, int64_t) override { return ScopedAStatus::ok(); }
    ScopedAStatus GetPartitionSize(const std::string&, const std::string&, int64_t* r) override { *r = 0; return ScopedAStatus::ok(); }
    ScopedAStatus MiSysCreateFolderMode(const std::string&, const std::string&, int32_t) override { return ScopedAStatus::ok(); }
    ScopedAStatus CopyFile(const std::string&, const std::string&) override { return ScopedAStatus::ok(); }
};

} // namespace aidl::vendor::xiaomi::hardware::misys::common
