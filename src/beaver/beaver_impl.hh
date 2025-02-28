#include <libbeaver/beaver.hh>
#include <string>

namespace beaver
{
    class BeaverImpl : public Beaver
    {
    public:
        // FIXME

        ~BeaverImpl() override = default;

        const std::string& get_name() const override;

        void display_video() override;
    };
} // namespace beaver
