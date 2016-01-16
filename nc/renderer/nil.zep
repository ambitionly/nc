namespace Nc\Renderer;

use Nc\Application\Http;

class Nil implements RendererInterface
{
    public function withHttp(<Http> http) -> void
    {
        return;
    }

    public function render() -> void
    {
        return;
    }

}
