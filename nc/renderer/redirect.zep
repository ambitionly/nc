namespace Nc\Renderer;

use Nc\Application\Http;

class Redirect extends RendererAbstract
{
    protected redirectUrl;

    public function __construct(string redirectUrl) -> void
    {
        let this->redirectUrl = redirectUrl;
    }

    public function getRedirectUrl() -> string
    {
        return this->redirectUrl;
    }

    public function withHttp(<Http> http) -> void
    {
        string u, q;

        let u = (string) this->redirectUrl;
        let q = (string) http_build_query(this->getData());

        if q->length() > 0 {
            if u->index("?") === false {
                let u .= "?" . q;
            } else {
                let u .= "&" . q;
            }
        }

        http->setResponseHeader("Location", u);
    }

    public function render() -> void
    {
        return;
    }

}
